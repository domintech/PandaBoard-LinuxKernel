cmd_arch/arm/kernel/debug.o := /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/dl/gcc-linaro-arm-linux-gnueabihf-4.7-2013.04-20130415_linux/bin/arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/kernel/.debug.o.d  -nostdinc -isystem /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/dl/gcc-linaro-arm-linux-gnueabihf-4.7-2013.04-20130415_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include -nostdinc -isystem /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/dl/gcc-linaro-arm-linux-gnueabihf-4.7-2013.04-20130415_linux/bin/../lib/gcc/arm-linux-gnueabihf/4.7.3/include -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi -Iinclude/generated/uapi -include /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float          -c -o arch/arm/kernel/debug.o arch/arm/kernel/debug.S

source_arch/arm/kernel/debug.o := arch/arm/kernel/debug.S

deps_arch/arm/kernel/debug.o := \
    $(wildcard include/config/debug/semihosting.h) \
    $(wildcard include/config/debug/ll/include.h) \
    $(wildcard include/config/mmu.h) \
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
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/hwcap.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/uapi/asm/hwcap.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/opcodes-virt.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  include/linux/stringify.h \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/arch/arm/include/debug/omap2plus.S \
    $(wildcard include/config/debug/omap2uart1.h) \
    $(wildcard include/config/debug/omap2uart2.h) \
    $(wildcard include/config/debug/omap2uart3.h) \
    $(wildcard include/config/debug/omap3uart3.h) \
    $(wildcard include/config/debug/omap4uart3.h) \
    $(wildcard include/config/debug/omap3uart4.h) \
    $(wildcard include/config/debug/omap4uart4.h) \
    $(wildcard include/config/debug/ti81xxuart1.h) \
    $(wildcard include/config/debug/ti81xxuart2.h) \
    $(wildcard include/config/debug/ti81xxuart3.h) \
    $(wildcard include/config/debug/am33xxuart1.h) \
    $(wildcard include/config/debug/zoom/uart.h) \
  /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/include/uapi/linux/serial_reg.h \

arch/arm/kernel/debug.o: $(deps_arch/arm/kernel/debug.o)

$(deps_arch/arm/kernel/debug.o):
