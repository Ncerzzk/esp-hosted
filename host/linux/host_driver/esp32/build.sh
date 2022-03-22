IF_TYPE=sdio

make -j8 target=$IF_TYPE CROSS_COMPILE=/usr/bin/arm-linux-gnueabihf- KERNEL="/home/ncer/linux" ARCH=arm 
