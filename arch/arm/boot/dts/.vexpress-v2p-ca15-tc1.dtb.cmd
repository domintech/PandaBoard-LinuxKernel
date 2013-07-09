cmd_arch/arm/boot/dts/vexpress-v2p-ca15-tc1.dtb := /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/vexpress-v2p-ca15-tc1.dtb -b 0  -d arch/arm/boot/dts/.vexpress-v2p-ca15-tc1.dtb.d arch/arm/boot/dts/vexpress-v2p-ca15-tc1.dts

source_arch/arm/boot/dts/vexpress-v2p-ca15-tc1.dtb := arch/arm/boot/dts/vexpress-v2p-ca15-tc1.dts

deps_arch/arm/boot/dts/vexpress-v2p-ca15-tc1.dtb := \
  arch/arm/boot/dts/vexpress-v2m-rs1.dtsi \

arch/arm/boot/dts/vexpress-v2p-ca15-tc1.dtb: $(deps_arch/arm/boot/dts/vexpress-v2p-ca15-tc1.dtb)

$(deps_arch/arm/boot/dts/vexpress-v2p-ca15-tc1.dtb):
