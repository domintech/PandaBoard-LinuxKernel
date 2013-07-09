cmd_kernel/sys_ni.o := /home/chiehyang/PandaBoard-LinuxKernel/gcc-linaro-arm-linux-gnueabihf-4.7-2013.03-20130313_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,kernel/.sys_ni.o.d  -nostdinc -isystem /home/chiehyang/PandaBoard-LinuxKernel/gcc-linaro-arm-linux-gnueabihf-4.7-2013.03-20130313_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi -Iinclude/generated/uapi -include /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(sys_ni)"  -D"KBUILD_MODNAME=KBUILD_STR(sys_ni)" -c -o kernel/.tmp_sys_ni.o kernel/sys_ni.c

source_kernel/sys_ni.o := kernel/sys_ni.c

deps_kernel/sys_ni.o := \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/linkage.h \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi/asm-generic/errno.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi/asm-generic/errno-base.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/unistd.h \
    $(wildcard include/config/aeabi.h) \
    $(wildcard include/config/oabi/compat.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi/asm/unistd.h \

kernel/sys_ni.o: $(deps_kernel/sys_ni.o)

$(deps_kernel/sys_ni.o):
