#!/bin/bash
wget -P /tmp/ https://raw.github.com/0xElectrifier/alx-low_level_programming/main/0x18-dynamic_libraries/preload.so
export LD_PRELOAD=/tmp/preload.so
