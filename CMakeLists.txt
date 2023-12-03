
project(rv1106_sox)
cmake_minimum_required(VERSION 3.10)
#使能c++17
set(CMAKE_CXX_STANDARD 17)
#加载自定义模块
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

set(CMAKE_BUILD_TYPE "Debug")
#set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_SYSTEM_NAME Linux)
#set(CMAKE_SYSTEM_PROCESSOR arm)

#set(SDK_DIR  "/data/works/rp_sdk/rv1106-20230626")
set(SDK_DIR  "/works/rv1106-20230626")
#set(TOOLCHAIN_DIR  "/works/rv1126_v2.2.5/buildroot/output/rockchip_rv1126_rv1109_facial_gate/host")
set(TOOLCHAIN_DIR  ${SDK_DIR}/tools/linux/toolchain/arm-rockchip830-linux-uclibcgnueabihf/)
#/data0/rv1126/rv1126_rv1109_linux_v2.2.5_20220113/buildroot/output/rockchip_rv1126_rv1109_facial_gate/host/bin/arm-linux-gnueabihf-gcc

#set(SYSROOT_PATH  ${TOOLCHAIN_DIR}/arm-buildroot-linux-gnueabihf/sysroot)
#set(CMAKE_SYSROOT "${SYSROOT_PATH}")

if (CMAKE_SYSTEM_PROCESSOR MATCHES "arm")
    # arm
    SET(CMAKE_C_COMPILER ${TOOLCHAIN_DIR}/bin/arm-rockchip830-linux-uclibcgnueabihf-gcc)
    SET(CMAKE_CXX_COMPILER ${TOOLCHAIN_DIR}/bin/arm-rockchip830-linux-uclibcgnueabihf-g++)
    include_directories("${TOOLCHAIN_DIR}/arm-buildroot-linux-gnueabihf/sysroot/usr/include")
    include_directories("${SDK_DIR}/media/out/include/")

    LINK_DIRECTORIES(${SDK_DIR}/media/out/root/usr/lib)
    if(${CMAKE_BUILD_TYPE} MATCHES "Release")
        add_compile_options(-O3 -mfpu=neon -mfloat-abi=hard)
    endif ()
else ()
    # x86
    SET(CMAKE_C_COMPILER   gcc)
    SET(CMAKE_CXX_COMPILER g++)
endif()
#SET(CMAKE_FIND_ROOT_PATH  ${SYSROOT_PATH})



#include_directories("${TOOLCHAIN_DIR}/arm-buildroot-linux-gnueabihf/sysroot/usr/include")
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

#set(C_FLAGS " -mfpu=neon -mfloat-abi=hard ")
set(CMAKE_C_FLAGS "${C_FLAGS} -w")




if(${CMAKE_BUILD_TYPE} MATCHES "Release")
    message(STATUS "Release版本")
    set(BuildType "Release")
    set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -s")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -s")
else()
    set(BuildType "Debug")
    message(STATUS "Debug版本")
    #add debug operation
    set(ENABLE_ASAN true)

    #set(CMAKE_C_FLAGS_DEBUG "-O0 -g2 -ggdb")

endif()


if(ENABLE_ASAN)
    # 以下问内存泄漏检测
    add_compile_options(-g)
    add_compile_options(-fsanitize=address)
    add_compile_options(-fno-omit-frame-pointer)
    #add_compile_options(-Wl,--no-undefined)
    #add_compile_options(-O1)
    #添加链接选项, 只能添加一行
    SET(CMAKE_EXE_LINKER_FLAGS "-fsanitize=address")
    SET(LINK_ASAN asan)
endif()

# 忽略deprecated-declarations 警告与错误
add_compile_options(-Wno-deprecated-declarations)
add_compile_options(-Wno-error=deprecated-declarations)

add_compile_options(-D_FILE_OFFSET_BITS=64)

#设置bin和lib库目录
set(RELEASE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/release)
if (CMAKE_SYSTEM_NAME MATCHES "Linux")
    SET(LIBRARY_OUTPUT_PATH ${RELEASE_DIR}/linux/${BuildType})
    SET(EXECUTABLE_OUTPUT_PATH ${RELEASE_DIR}/linux/${BuildType})
    add_compile_options(-fPIC)
elseif (CMAKE_SYSTEM_NAME MATCHES "Windows")
    SET(LIBRARY_OUTPUT_PATH ${RELEASE_DIR}/windows/${BuildType})
    SET(EXECUTABLE_OUTPUT_PATH ${RELEASE_DIR}/windows/${BuildType})
elseif (CMAKE_SYSTEM_NAME MATCHES "Darwin")
    SET(LIBRARY_OUTPUT_PATH ${RELEASE_DIR}/mac/${BuildType})
    SET(EXECUTABLE_OUTPUT_PATH ${RELEASE_DIR}/mac/${BuildType})
endif ()

LINK_DIRECTORIES(${LIBRARY_OUTPUT_PATH})



#include_directories(${SDK_DIR}/output/out/media_out/include)



ADD_DEFINITIONS(-DARM)
ADD_DEFINITIONS(-DZLOG)
set(LINK_LIB_LIST pthread asound m )


set(prefix "call_stack_prefix: ")
message(${prefix} "top level" ${PROJECT_NAME})

#add_subdirectory(drm_plane_set)
add_subdirectory(src)
#add_subdirectory(test)