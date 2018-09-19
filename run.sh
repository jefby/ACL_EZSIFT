#!/bin/bash

# export LD_LIBRARY_PATH=/usr/lib:$LD_LIBRARY_PATH:/home/linaro/ComputeLibrary/build/arm_compute/:/usr/local/lib
# ./build/bin/ACL_EZSIFT


#NDK_ROOT=${ANDROID_NDK_ROOT}
NDK_ROOT=/home/parallels/work/android-ndk-r16b/

API_LEVEL=21
ABI=armeabi-v7a

cmake -DCMAKE_BUILD_WITH_INSTALL_RPATH=ON \
      -DCMAKE_TOOLCHAIN_FILE="${NDK_ROOT}/build/cmake/android.toolchain.cmake" \
      -DANDROID_NDK="${NDK_ROOT}" \
      -DANDROID_NATIVE_API_LEVEL=${API_LEVEL} \
      -DANDROID_ARM_NEON=ON \
      -DANDROID_ABI="$ABI" \
      -DCMAKE_BUILD_TYPE=Release \
      -DBUILD_TESTING=OFF \
      -DANDROID_STL="c++_static" \
      ../

make -j${N_JOBS}
