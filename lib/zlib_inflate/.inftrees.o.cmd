cmd_lib/zlib_inflate/inftrees.o := /home/chiehyang/PandaBoard-LinuxKernel/gcc-linaro-arm-linux-gnueabihf-4.7-2013.03-20130313_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,lib/zlib_inflate/.inftrees.o.d  -nostdinc -isystem /home/chiehyang/PandaBoard-LinuxKernel/gcc-linaro-arm-linux-gnueabihf-4.7-2013.03-20130313_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi -Iinclude/generated/uapi -include /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(inftrees)"  -D"KBUILD_MODNAME=KBUILD_STR(zlib_inflate)" -c -o lib/zlib_inflate/.tmp_inftrees.o lib/zlib_inflate/inftrees.c

source_lib/zlib_inflate/inftrees.o := lib/zlib_inflate/inftrees.c

deps_lib/zlib_inflate/inftrees.o := \
  include/linux/zutil.h \
  include/linux/zlib.h \
  include/linux/zconf.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
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
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi/asm/posix_types.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi/asm-generic/posix_types.h \
  /home/chiehyang/PandaBoard-LinuxKernel/gcc-linaro-arm-linux-gnueabihf-4.7-2013.03-20130313_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include/stdarg.h \
  include/uapi/linux/string.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/string.h \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/symbol/prefix.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  include/linux/linkage.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/linkage.h \
  include/linux/bitops.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/irqflags.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/hwcap.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi/asm/hwcap.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/asm-generic/bitops/le.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/swab.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi/asm/swab.h \
  include/linux/byteorder/generic.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/printk.h \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
    $(wildcard include/config/modules.h) \
  include/linux/kern_levels.h \
  include/linux/dynamic_debug.h \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi/asm-generic/errno.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi/asm-generic/errno-base.h \
  include/uapi/linux/kernel.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi/linux/sysinfo.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/div64.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/compiler.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  lib/zlib_inflate/inftrees.h \

lib/zlib_inflate/inftrees.o: $(deps_lib/zlib_inflate/inftrees.o)

$(deps_lib/zlib_inflate/inftrees.o):
