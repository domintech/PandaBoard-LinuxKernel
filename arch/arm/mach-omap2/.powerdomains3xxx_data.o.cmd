cmd_arch/arm/mach-omap2/powerdomains3xxx_data.o := /home/chiehyang/PandaBoard-LinuxKernel/gcc-linaro-arm-linux-gnueabihf-4.7-2013.03-20130313_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/mach-omap2/.powerdomains3xxx_data.o.d  -nostdinc -isystem /home/chiehyang/PandaBoard-LinuxKernel/gcc-linaro-arm-linux-gnueabihf-4.7-2013.03-20130313_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi -Iinclude/generated/uapi -include /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/mach-omap2/include -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/plat-omap/include    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(powerdomains3xxx_data)"  -D"KBUILD_MODNAME=KBUILD_STR(powerdomains3xxx_data)" -c -o arch/arm/mach-omap2/.tmp_powerdomains3xxx_data.o arch/arm/mach-omap2/powerdomains3xxx_data.c

source_arch/arm/mach-omap2/powerdomains3xxx_data.o := arch/arm/mach-omap2/powerdomains3xxx_data.c

deps_arch/arm/mach-omap2/powerdomains3xxx_data.o := \
  include/linux/kernel.h \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/symbol/prefix.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/gcc-linaro-arm-linux-gnueabihf-4.7-2013.03-20130313_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include/stdarg.h \
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
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
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
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  include/uapi/linux/string.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/string.h \
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
  include/linux/bug.h \
  arch/arm/mach-omap2/soc.h \
    $(wildcard include/config/arch/multiplatform.h) \
    $(wildcard include/config/soc/omap2420.h) \
    $(wildcard include/config/soc/omap2430.h) \
    $(wildcard include/config/arch/omap3.h) \
    $(wildcard include/config/arch/omap4.h) \
    $(wildcard include/config/soc/omap5.h) \
    $(wildcard include/config/soc/am33xx.h) \
    $(wildcard include/config/arch/omap2.h) \
    $(wildcard include/config/soc/omap3430.h) \
    $(wildcard include/config/arch/omap2plus.h) \
  arch/arm/mach-omap2/omap24xx.h \
  arch/arm/mach-omap2/omap34xx.h \
    $(wildcard include/config/base.h) \
  arch/arm/mach-omap2/omap44xx.h \
  arch/arm/mach-omap2/ti81xx.h \
  arch/arm/mach-omap2/am33xx.h \
  arch/arm/mach-omap2/omap54xx.h \
  arch/arm/mach-omap2/powerdomain.h \
    $(wildcard include/config/pm/debug.h) \
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi/linux/const.h \
  include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  include/linux/stringify.h \
  include/linux/bottom_half.h \
  include/linux/spinlock_types.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/spinlock_types.h \
  include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
    $(wildcard include/config/generic/atomic64.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/atomic.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  include/asm-generic/cmpxchg-local.h \
  include/asm-generic/atomic-long.h \
  include/asm-generic/atomic64.h \
  include/linux/stacktrace.h \
    $(wildcard include/config/stacktrace.h) \
    $(wildcard include/config/user/stacktrace/support.h) \
  include/linux/rwlock_types.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/spinlock.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/hw_breakpoint.h \
  include/linux/rwlock.h \
  include/linux/spinlock_api_smp.h \
    $(wildcard include/config/inline/spin/lock.h) \
    $(wildcard include/config/inline/spin/lock/bh.h) \
    $(wildcard include/config/inline/spin/lock/irq.h) \
    $(wildcard include/config/inline/spin/lock/irqsave.h) \
    $(wildcard include/config/inline/spin/trylock.h) \
    $(wildcard include/config/inline/spin/trylock/bh.h) \
    $(wildcard include/config/uninline/spin/unlock.h) \
    $(wildcard include/config/inline/spin/unlock/bh.h) \
    $(wildcard include/config/inline/spin/unlock/irq.h) \
    $(wildcard include/config/inline/spin/unlock/irqrestore.h) \
  include/linux/rwlock_api_smp.h \
    $(wildcard include/config/inline/read/lock.h) \
    $(wildcard include/config/inline/write/lock.h) \
    $(wildcard include/config/inline/read/lock/bh.h) \
    $(wildcard include/config/inline/write/lock/bh.h) \
    $(wildcard include/config/inline/read/lock/irq.h) \
    $(wildcard include/config/inline/write/lock/irq.h) \
    $(wildcard include/config/inline/read/lock/irqsave.h) \
    $(wildcard include/config/inline/write/lock/irqsave.h) \
    $(wildcard include/config/inline/read/trylock.h) \
    $(wildcard include/config/inline/write/trylock.h) \
    $(wildcard include/config/inline/read/unlock.h) \
    $(wildcard include/config/inline/write/unlock.h) \
    $(wildcard include/config/inline/read/unlock/bh.h) \
    $(wildcard include/config/inline/write/unlock/bh.h) \
    $(wildcard include/config/inline/read/unlock/irq.h) \
    $(wildcard include/config/inline/write/unlock/irq.h) \
    $(wildcard include/config/inline/read/unlock/irqrestore.h) \
    $(wildcard include/config/inline/write/unlock/irqrestore.h) \
  arch/arm/mach-omap2/voltage.h \
  include/linux/err.h \
  include/linux/platform_data/voltage-omap.h \
  arch/arm/mach-omap2/vc.h \
  arch/arm/mach-omap2/vp.h \
  arch/arm/mach-omap2/powerdomains2xxx_3xxx_data.h \
  arch/arm/mach-omap2/prcm-common.h \
  arch/arm/mach-omap2/prm2xxx_3xxx.h \
  arch/arm/mach-omap2/prm.h \
  include/linux/io.h \
    $(wildcard include/config/has/ioport.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/io.h \
    $(wildcard include/config/need/mach/io/h.h) \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/pcmcia/soc/common.h) \
    $(wildcard include/config/isa.h) \
    $(wildcard include/config/pccard.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/memory.h \
    $(wildcard include/config/need/mach/memory/h.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/phys/offset.h) \
    $(wildcard include/config/virt/to/bus.h) \
  include/linux/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  include/asm-generic/pci_iomap.h \
    $(wildcard include/config/no/generic/pci/ioport/map.h) \
    $(wildcard include/config/generic/pci/iomap.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/page.h \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/glue.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/pgtable-2level-types.h \
  include/asm-generic/getorder.h \
  arch/arm/mach-omap2/prm-regbits-34xx.h \
  arch/arm/mach-omap2/prm3xxx.h \
    $(wildcard include/config/offset.h) \
  arch/arm/mach-omap2/cm2xxx_3xxx.h \
  arch/arm/mach-omap2/cm.h \
  arch/arm/mach-omap2/cm-regbits-34xx.h \

arch/arm/mach-omap2/powerdomains3xxx_data.o: $(deps_arch/arm/mach-omap2/powerdomains3xxx_data.o)

$(deps_arch/arm/mach-omap2/powerdomains3xxx_data.o):
