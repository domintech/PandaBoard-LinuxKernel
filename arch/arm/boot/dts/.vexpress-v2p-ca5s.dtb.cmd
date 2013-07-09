cmd_arch/arm/boot/dts/vexpress-v2p-ca5s.dtb := /home/chiehyang/PandaBoard-LinuxKernel/stable-kernel/KERNEL/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/vexpress-v2p-ca5s.dtb -b 0  -d arch/arm/boot/dts/.vexpress-v2p-ca5s.dtb.d arch/arm/boot/dts/vexpress-v2p-ca5s.dts

source_arch/arm/boot/dts/vexpress-v2p-ca5s.dtb := arch/arm/boot/dts/vexpress-v2p-ca5s.dts

deps_arch/arm/boot/dts/vexpress-v2p-ca5s.dtb := \
  arch/arm/boot/dts/vexpress-v2m-rs1.dtsi \

arch/arm/boot/dts/vexpress-v2p-ca5s.dtb: $(deps_arch/arm/boot/dts/vexpress-v2p-ca5s.dtb)

$(deps_arch/arm/boot/dts/vexpress-v2p-ca5s.dtb):
