cmd_kernel/debug/kdb/gen-kdb_cmds.o := /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/dl/gcc-linaro-arm-linux-gnueabihf-4.7-2013.04-20130415_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,kernel/debug/kdb/.gen-kdb_cmds.o.d  -nostdinc -isystem /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/dl/gcc-linaro-arm-linux-gnueabihf-4.7-2013.04-20130415_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include -nostdinc -isystem /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/dl/gcc-linaro-arm-linux-gnueabihf-4.7-2013.04-20130415_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi -Iinclude/generated/uapi -include /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(gen_kdb_cmds)"  -D"KBUILD_MODNAME=KBUILD_STR(gen_kdb_cmds)" -c -o kernel/debug/kdb/.tmp_gen-kdb_cmds.o kernel/debug/kdb/gen-kdb_cmds.c

source_kernel/debug/kdb/gen-kdb_cmds.o := kernel/debug/kdb/gen-kdb_cmds.c

deps_kernel/debug/kdb/gen-kdb_cmds.o := \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
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
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
    $(wildcard include/config/modules.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/arm/include/generated/asm/types.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi/linux/posix_types.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi/asm/posix_types.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi/asm-generic/posix_types.h \

kernel/debug/kdb/gen-kdb_cmds.o: $(deps_kernel/debug/kdb/gen-kdb_cmds.o)

$(deps_kernel/debug/kdb/gen-kdb_cmds.o):
