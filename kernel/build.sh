#
#!/bin/bash

#compile the kernel

export ARCH=arm64

export CROSS_COMPILE=$(pwd)/../gcc-linaro-7.2.1-2017.11-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-

echo $ARCH
echo $CROSS_COMPILE
make defconfig distro.config

make -j12 Image.gz dtbs KERNELRELEASE=4.14.0-qcomlt-arm64
make -j12 modules KERNELRELEASE=4.14.0-qcomlt-arm64

# install the moduel to modules
#mkdir moudles
#make modules_install KERNELRELEASE=4.14.0-qcomlt-arm64 INSTALL_MOD_STRIP=1 INSTALL_MOD_PATH=moudles

cat arch/arm64/boot/Image.gz arch/arm64/boot/dts/qcom/apq8016-sbc.dtb > Image.gz+dtb

$(pwd)/../skales/mkbootimg --kernel Image.gz+dtb \
              --ramdisk initrd.img-4.14.0-qcomlt-arm64 \
              --output boot.img \
              --pagesize 2048 \
              --base 0x80000000 \
              --cmdline "root=/dev/disk/by-partlabel/rootfs rw rootwait console=ttyMSM0,115200n8"


make tools/burnkey
##make tools/sscom
##make tools/route
#compile the bootloader
cd ../lk
./build.sh
cd -

