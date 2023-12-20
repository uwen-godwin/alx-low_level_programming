#!/bin/bash
wget -P /temp https://github.com/uwen-godwin/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gwin.so
export LD_PRELOAD=/temp/libmake.so
