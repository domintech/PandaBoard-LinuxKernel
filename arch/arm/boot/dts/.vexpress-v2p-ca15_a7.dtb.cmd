cmd_arch/arm/boot/dts/vexpress-v2p-ca15_a7.dtb := /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/vexpress-v2p-ca15_a7.dtb -b 0  -d arch/arm/boot/dts/.vexpress-v2p-ca15_a7.dtb.d arch/arm/boot/dts/vexpress-v2p-ca15_a7.dts

source_arch/arm/boot/dts/vexpress-v2p-ca15_a7.dtb := arch/arm/boot/dts/vexpress-v2p-ca15_a7.dts

deps_arch/arm/boot/dts/vexpress-v2p-ca15_a7.dtb := \
  arch/arm/boot/dts/vexpress-v2m-rs1.dtsi \

arch/arm/boot/dts/vexpress-v2p-ca15_a7.dtb: $(deps_arch/arm/boot/dts/vexpress-v2p-ca15_a7.dtb)

$(deps_arch/arm/boot/dts/vexpress-v2p-ca15_a7.dtb):
