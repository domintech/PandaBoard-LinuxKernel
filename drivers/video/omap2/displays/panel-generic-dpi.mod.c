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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b3d365e, "omapdss_dpi_display_enable" },
	{ 0x4d7d2f83, "omapdss_dpi_set_data_lines" },
	{ 0xf9a482f9, "msleep" },
	{ 0x95aaa4e0, "omapdss_dpi_display_disable" },
	{ 0x2bfb4e4d, "dpi_check_timings" },
	{ 0x42ca5ca7, "omapdss_dpi_set_timings" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0xca3430a7, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=omapdss";


MODULE_INFO(srcversion, "30EC6CFEACC9B7C1B2B50F1");
