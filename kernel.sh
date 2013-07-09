#/bash/sh

make ARCH=arm CROSS_COMPILE=${CC} menuconfig
make ARCH=arm CROSS_COMPILE=${CC} -j8

sudo cp -v arch/arm/boot/zImage /media/boot_/
sync
sudo umount /media/boot_/
sudo umount /media/rootfs_/
