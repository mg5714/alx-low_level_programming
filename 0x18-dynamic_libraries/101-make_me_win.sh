#!/bin/bash
LIB_URL="https://github.com/mg5714/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libgiga.so"
wget -P /tmp "$LIB_URL"
export LD_PRELOAD="/$PWD/libgiga.so"
