#!/bin/sh 
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- distclean 
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- imx_hbb_emmc_defconfig
#make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- menuconfig 
make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- all -j8
