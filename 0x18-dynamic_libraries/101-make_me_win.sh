#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/mg5714/alx-low_level_programming/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="/$PWD/libgiga.so"
