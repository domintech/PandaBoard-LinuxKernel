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
	{ 0x3aa0b1b3, "omap_dss_unregister_driver" },
	{ 0xb7980c33, "omap_dss_register_driver" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x1b0d3798, "dev_err" },
	{ 0xba66d9a4, "backlight_device_register" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfaac44b, "backlight_device_unregister" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0x2b3d365e, "omapdss_dpi_display_enable" },
	{ 0x4d7d2f83, "omapdss_dpi_set_data_lines" },
	{ 0x42ca5ca7, "omapdss_dpi_set_timings" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x95aaa4e0, "omapdss_dpi_display_disable" },
	{ 0xf9a482f9, "msleep" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=omapdss,backlight";


MODULE_INFO(srcversion, "A40D93AE7042F869E5443FB");
