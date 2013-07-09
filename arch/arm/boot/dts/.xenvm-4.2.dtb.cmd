cmd_arch/arm/boot/dts/xenvm-4.2.dtb := /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/xenvm-4.2.dtb -b 0  -d arch/arm/boot/dts/.xenvm-4.2.dtb.d arch/arm/boot/dts/xenvm-4.2.dts

source_arch/arm/boot/dts/xenvm-4.2.dtb := arch/arm/boot/dts/xenvm-4.2.dts

deps_arch/arm/boot/dts/xenvm-4.2.dtb := \

arch/arm/boot/dts/xenvm-4.2.dtb: $(deps_arch/arm/boot/dts/xenvm-4.2.dtb)

$(deps_arch/arm/boot/dts/xenvm-4.2.dtb):
