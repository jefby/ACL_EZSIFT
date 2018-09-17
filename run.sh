#!/bin/bash

export LD_LIBRARY_PATH=/usr/lib:$LD_LIBRARY_PATH:/home/linaro/ComputeLibrary/build/arm_compute/:/usr/local/lib
./build/bin/ACL_EZSIFT
