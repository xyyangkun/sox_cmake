//
// Created by xy on 2023/12/3.
// debug param: example_reverb /home/xy/output.wav /home/xy/out_eq.wav
//
#include "sox.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main(int argc, char * argv[])
{
    static sox_format_t * in, * out; /* input and output files */
    sox_effects_chain_t * chain;
    sox_effect_t * e;
    char * args[10];
    //在使用sox前调用，初始化全局参数
    assert(sox_init() == SOX_SUCCESS);

    //打开输入文件
    assert(in = sox_open_read(argv[1], NULL, NULL, NULL));
    //打开输出文件，必须制定输出信号特征(第二个参数)，这里简单演示，使用in一致的信号特征
    assert(out = sox_open_write(argv[2], &in->signal, NULL, NULL, NULL, NULL));
    //创建一个效果链
    chain = sox_create_effects_chain(&in->encoding, &out->encoding);
    //创建一个最简单的效果，输入文件
    e = sox_create_effect(sox_find_effect("input"));
    args[0] = (char *)in, assert(sox_effect_options(e, 1, args) == SOX_SUCCESS);
    //增加效果到效果链
    assert(sox_add_effect(chain, e, &in->signal, &in->signal) == SOX_SUCCESS);
    free(e);

    // 添加一个reverb
    e = sox_create_effect(sox_find_effect("reverb"));
    args[0] = (char*)"1";      // reverberance 0~100
    args[1] = (char*)"100";    // hf_damping 0~100
    args[2] = (char*)"1";      // room_scale 0~100
    args[3] = (char*)"1";      // stere_depth 0~100
    args[4] = (char*)"10";    // pre_delay_ms 0~500
    args[5] = (char*)"10";    // web_gain_db -10~10
    assert(sox_effect_options(e, 6, args) == SOX_SUCCESS);
    //增加效果到效果链
    assert(sox_add_effect(chain, e, &in->signal, &in->signal) == SOX_SUCCESS);
    free(e);

    //输出到文件的效果器
    e = sox_create_effect(sox_find_effect("output"));
    args[0] = (char *)out, assert(sox_effect_options(e, 1, args) == SOX_SUCCESS);
    assert(sox_add_effect(chain, e, &in->signal, &in->signal) == SOX_SUCCESS);
    free(e);

    //让整个效果器运行起来，直到遇到eof
    sox_flow_effects(chain, NULL, NULL);

    //clean
    sox_delete_effects_chain(chain);
    sox_close(out);
    sox_close(in);
    sox_quit();

    return 0;
}

