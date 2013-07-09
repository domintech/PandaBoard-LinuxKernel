cmd_arch/arm/crypto/aes-armv4.o := /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/dl/gcc-linaro-arm-linux-gnueabihf-4.7-2013.04-20130415_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/crypto/.aes-armv4.o.d  -nostdinc -isystem /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/dl/gcc-linaro-arm-linux-gnueabihf-4.7-2013.04-20130415_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include -nostdinc -isystem /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/dl/gcc-linaro-arm-linux-gnueabihf-4.7-2013.04-20130415_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi -Iinclude/generated/uapi -include /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float          -c -o arch/arm/crypto/aes-armv4.o arch/arm/crypto/aes-armv4.S

source_arch/arm/crypto/aes-armv4.o := arch/arm/crypto/aes-armv4.S

deps_arch/arm/crypto/aes-armv4.o := \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/linkage.h \

arch/arm/crypto/aes-armv4.o: $(deps_arch/arm/crypto/aes-armv4.o)

$(deps_arch/arm/crypto/aes-armv4.o):
