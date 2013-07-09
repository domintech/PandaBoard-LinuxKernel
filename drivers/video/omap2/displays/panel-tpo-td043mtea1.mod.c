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
	{ 0xebc57bbd, "driver_unregister" },
	{ 0xb5566b24, "spi_register_driver" },
	{ 0x1258d9d9, "regulator_disable" },
	{ 0x95aaa4e0, "omapdss_dpi_display_disable" },
	{ 0x2b3d365e, "omapdss_dpi_display_enable" },
	{ 0x4d7d2f83, "omapdss_dpi_set_data_lines" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8a5c7a80, "regulator_enable" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0xb7980c33, "omap_dss_register_driver" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x331a7521, "spi_setup" },
	{ 0x1b0d3798, "dev_err" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x16e724ee, "sysfs_create_group" },
	{ 0xea45c584, "regulator_get" },
	{ 0x373db350, "kstrtoint" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0xb81960ca, "snprintf" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xfe990052, "gpio_free" },
	{ 0xd85ac634, "regulator_put" },
	{ 0xec06ec83, "sysfs_remove_group" },
	{ 0x2bfb4e4d, "dpi_check_timings" },
	{ 0x42ca5ca7, "omapdss_dpi_set_timings" },
	{ 0x37a0cba, "kfree" },
	{ 0x3aa0b1b3, "omap_dss_unregister_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x900b36e, "dev_warn" },
	{ 0x6da70079, "spi_sync" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xca3430a7, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=omapdss";


MODULE_INFO(srcversion, "40A4169326EB687044AD5BF");
