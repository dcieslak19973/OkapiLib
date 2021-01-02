To install arm-none-eabi on Windows Subsystem for Linux (WSL 2.0) For Ubuntu 18.04:

$ sudo apt-get update
$ sudo apt install make cmake build-essential
$ cd /tmp
$ wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/7-2018q2/gcc-arm-none-eabi-7-2018-q2-update-linux.tar.bz2?revision=bc2c96c0-14b5-4bb4-9f18-bceb4050fee7?product=GNU%20Arm%20Embedded%20Toolchain,64-bit,,Linux,7-2018-q2-update
$ bunzip2 gcc-arm-none-eabi-7-2018-q2-update-linux.tar.bz2
$ sudo tar xvf gcc-arm-none-eabi-7-2018-q2-update-linux.tar -C /usr/share
$ sudo ln -s /usr/share/gcc-arm-none-eabi-7-2018-q2-update/bin/arm-none-eabi-gcc /usr/bin/arm-none-eabi-gcc
$ sudo ln -s /usr/share/gcc-arm-none-eabi-7-2018-q2-update/bin/arm-none-eabi-g++ /usr/bin/arm-none-eabi-g++
$ sudo ln -s /usr/share/gcc-arm-none-eabi-7-2018-q2-update/bin/arm-none-eabi-gdb /usr/bin/arm-none-eabi-gdb
$ sudo ln -s /usr/share/gcc-arm-none-eabi-7-2018-q2-update/bin/arm-none-eabi-size /usr/bin/arm-none-eabi-size
