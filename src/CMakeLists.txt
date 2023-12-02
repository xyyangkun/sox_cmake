message("in src level:")

set(libsox_la_SOURCES adpcms.c adpcms.h aiff.c aiff.h cvsd.c cvsd.h cvsdfilt.h
        g711.c g711.h g721.c g723_24.c g723_40.c g72x.c g72x.h vox.c vox.h
        raw.c raw.h formats.c formats.h formats_i.c sox_i.h skelform.c
        xmalloc.c xmalloc.h getopt.c
        util.c util.h libsox.c libsox_i.c sox-fmt.c soxomp.h )
set(libsox_la_SOURCES ${libsox_la_SOURCES}
        band.h bend.c biquad.c biquad.h biquads.c chorus.c compand.c
        compandt.c compandt.h contrast.c dcshift.c delay.c dft_filter.c
        dft_filter.h dither.c dither.h divide.c downsample.c earwax.c
        echo.c echos.c effects.c effects.h effects_i.c effects_i_dsp.c
        fade.c fft4g.c fft4g.h fifo.h fir.c firfit.c flanger.c gain.c
        hilbert.c input.c ladspa.h ladspa.c loudness.c mcompand.c
        mcompand_xover.h noiseprof.c noisered.c
        noisered.h output.c overdrive.c pad.c phaser.c rate.c
        rate_filters.h rate_half_fir.h rate_poly_fir0.h rate_poly_fir.h
        remix.c repeat.c reverb.c reverse.c silence.c sinc.c skeleff.c
        speed.c splice.c stat.c stats.c stretch.c swap.c
        synth.c tempo.c tremolo.c trim.c upsample.c vad.c vol.c)

set(libsox_la_SOURCES  ${libsox_la_SOURCES}
        raw-fmt.c s1-fmt.c s2-fmt.c s3-fmt.c
        s4-fmt.c u1-fmt.c u2-fmt.c u3-fmt.c u4-fmt.c al-fmt.c la-fmt.c ul-fmt.c
        lu-fmt.c 8svx.c aiff-fmt.c aifc-fmt.c au.c avr.c cdr.c cvsd-fmt.c
        dvms-fmt.c dat.c hcom.c htk.c maud.c prc.c sf.c smp.c
        sounder.c soundtool.c sphere.c tx16w.c voc.c vox-fmt.c ima-fmt.c adpcm.c adpcm.h
        ima_rw.c ima_rw.h wav.c wve.c xa.c nulfile.c f4-fmt.c f8-fmt.c gsrt.c
        id3.c id3.h)
set(libsox_la_SOURCES  ${libsox_la_SOURCES}
        alsa.c
        )

add_library(rksox_static STATIC  ${libsox_la_SOURCES})
add_library(rksox_shared SHARED ${libsox_la_SOURCES})
set_target_properties(rksox_static PROPERTIES  COMPILE_FLAGS "-DUSE_UVC -DUSE_UAC") # ok  USE_UAC
set_target_properties(rksox_shared PROPERTIES  COMPILE_FLAGS "-DUSE_UVC -DUSE_UAC") # ok  USE_UAC


###################################################################################
# sox
add_executable(sox sox.c )
target_link_libraries(sox  rksox_static ${LINK_LIB_LIST})
#编译目标设置-DTEST宏
#https://stackoverflow.com/questions/5096881/does-set-target-properties-in-cmake-override-cmake-cxx-flags
set_target_properties(sox PROPERTIES  COMPILE_FLAGS "-DTEST") # ok
add_custom_command(TARGET sox
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        "../../release/linux/${BuildType}/sox"
        "/nfs/rv1106/switch/"
        COMMAND ${CMAKE_COMMAND} -E   md5sum "../../release/linux/${BuildType}/sox"
        )


###################################################################################
# sox example code 0
add_executable(example0 example0.c )
target_link_libraries(example0  rksox_shared ${LINK_LIB_LIST})
#编译目标设置-DTEST宏
#https://stackoverflow.com/questions/5096881/does-set-target-properties-in-cmake-override-cmake-cxx-flags
set_target_properties(example0 PROPERTIES  COMPILE_FLAGS "-DTEST") # ok

###################################################################################
# sox example code 1
add_executable(example1 example1.c )
target_link_libraries(example1 rksox_shared ${LINK_LIB_LIST})
#编译目标设置-DTEST宏
#https://stackoverflow.com/questions/5096881/does-set-target-properties-in-cmake-override-cmake-cxx-flags
set_target_properties(example1 PROPERTIES  COMPILE_FLAGS "-DTEST") # ok

###################################################################################
# sox example code 2
add_executable(example2 example2.c )
target_link_libraries(example2 rksox_shared ${LINK_LIB_LIST})
#编译目标设置-DTEST宏
#https://stackoverflow.com/questions/5096881/does-set-target-properties-in-cmake-override-cmake-cxx-flags
set_target_properties(example2 PROPERTIES  COMPILE_FLAGS "-DTEST") # ok

###################################################################################
# sox example code 3
add_executable(example3 example3.c)
target_link_libraries(example3 rksox_shared ${LINK_LIB_LIST})
#编译目标设置-DTEST宏
#https://stackoverflow.com/questions/5096881/does-set-target-properties-in-cmake-override-cmake-cxx-flags
set_target_properties(example3 PROPERTIES  COMPILE_FLAGS "-DTEST") # ok

###################################################################################
# sox example code 4
add_executable(example4 example4.c)
target_link_libraries(example4 rksox_shared ${LINK_LIB_LIST})
#编译目标设置-DTEST宏
#https://stackoverflow.com/questions/5096881/does-set-target-properties-in-cmake-override-cmake-cxx-flags
set_target_properties(example4 PROPERTIES  COMPILE_FLAGS "-DTEST") # ok

###################################################################################
# sox example code 5
add_executable(example5 example5.c)
target_link_libraries(example5 rksox_shared ${LINK_LIB_LIST})
#编译目标设置-DTEST宏
#https://stackoverflow.com/questions/5096881/does-set-target-properties-in-cmake-override-cmake-cxx-flags
set_target_properties(example5 PROPERTIES  COMPILE_FLAGS "-DTEST") # ok

###################################################################################
# sox example code 6
add_executable(example6 example6.c )
target_link_libraries(example6 rksox_shared ${LINK_LIB_LIST})
#编译目标设置-DTEST宏
#https://stackoverflow.com/questions/5096881/does-set-target-properties-in-cmake-override-cmake-cxx-flags
set_target_properties(example6 PROPERTIES  COMPILE_FLAGS "-DTEST") # ok


###################################################################################
# sox example code yk test
add_executable(yk_test_memstream yk_test_memstream.cpp)
target_link_libraries(yk_test_memstream rksox_shared ${LINK_LIB_LIST})
#编译目标设置-DTEST宏
#https://stackoverflow.com/questions/5096881/does-set-target-properties-in-cmake-override-cmake-cxx-flags
set_target_properties(yk_test_memstream PROPERTIES  COMPILE_FLAGS "-DTEST") # ok
