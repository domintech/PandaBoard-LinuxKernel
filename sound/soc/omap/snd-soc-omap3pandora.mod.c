#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6ea25cad, "module_layout" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x48a5b067, "__machine_arch_type" },
	{ 0x1258d9d9, "regulator_disable" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0xd673c329, "snd_soc_dapm_new_controls" },
	{ 0x707704b4, "snd_soc_dapm_nc_pin" },
	{ 0xb44490c3, "snd_soc_dapm_add_routes" },
	{ 0x27e1a049, "printk" },
	{ 0x7254adb9, "platform_device_del" },
	{ 0x11652a4e, "platform_device_alloc" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x2a56bb42, "platform_device_add" },
	{ 0x370d91a7, "platform_device_unregister" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf4dcd9bc, "snd_soc_dai_set_clkdiv" },
	{ 0xb2d4e33d, "snd_soc_dai_set_sysclk" },
	{ 0xfe990052, "gpio_free" },
	{ 0xd85ac634, "regulator_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xea45c584, "regulator_get" },
	{ 0x8a5c7a80, "regulator_enable" },
	{ 0x74e9a7d4, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "6EF32E3CCDBBA1178729FC8");
