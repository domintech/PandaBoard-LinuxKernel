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
	{ 0x1fec7798, "platform_driver_unregister" },
	{ 0x6ff41902, "platform_driver_register" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xfdbf81f1, "netif_device_attach" },
	{ 0x45ea5e05, "c_can_power_up" },
	{ 0x4a33461a, "_dev_info" },
	{ 0xcd1df8aa, "devm_pinctrl_put" },
	{ 0x7649527b, "register_c_can_dev" },
	{ 0x3cf4ec0a, "clk_get_rate" },
	{ 0x3cee8d05, "devm_request_and_ioremap" },
	{ 0x334e7fa6, "of_alias_get_id" },
	{ 0x1b0d3798, "dev_err" },
	{ 0x64502b1c, "alloc_c_can_dev" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0xadf42bd5, "__request_region" },
	{ 0x33493eb7, "platform_get_irq" },
	{ 0x64b5450, "clk_get" },
	{ 0x7b536fee, "pinctrl_select_state" },
	{ 0x9522e275, "pinctrl_lookup_state" },
	{ 0x1e1774eb, "devm_pinctrl_get" },
	{ 0x1711497e, "of_match_device" },
	{ 0x788fe103, "iomem_resource" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x9bce482f, "__release_region" },
	{ 0x9c9de9fa, "platform_get_resource" },
	{ 0xc2165d85, "__arm_iounmap" },
	{ 0x39a59575, "free_c_can_dev" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0xcc6c996b, "unregister_c_can_dev" },
	{ 0x27e1a049, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x82c1e38, "netdev_err" },
	{ 0x900b36e, "dev_warn" },
	{ 0xa85666, "c_can_power_down" },
	{ 0x255f8e25, "netif_device_detach" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0xac8f37b2, "outer_cache" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=c_can";

MODULE_ALIAS("of:N*T*Cbosch,c_can*");
MODULE_ALIAS("of:N*T*Cbosch,d_can*");
MODULE_ALIAS("platform:c_can_platform");
MODULE_ALIAS("platform:c_can");
MODULE_ALIAS("platform:d_can");

MODULE_INFO(srcversion, "8092B08E12DDA3017875A3B");
