cmd_arch/arm/boot/dts/vexpress-v2p-ca9.dtb := /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/vexpress-v2p-ca9.dtb -b 0  -d arch/arm/boot/dts/.vexpress-v2p-ca9.dtb.d arch/arm/boot/dts/vexpress-v2p-ca9.dts

source_arch/arm/boot/dts/vexpress-v2p-ca9.dtb := arch/arm/boot/dts/vexpress-v2p-ca9.dts

deps_arch/arm/boot/dts/vexpress-v2p-ca9.dtb := \
  arch/arm/boot/dts/vexpress-v2m.dtsi \

arch/arm/boot/dts/vexpress-v2p-ca9.dtb: $(deps_arch/arm/boot/dts/vexpress-v2p-ca9.dtb)

$(deps_arch/arm/boot/dts/vexpress-v2p-ca9.dtb):
