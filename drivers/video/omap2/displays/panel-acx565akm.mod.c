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
	{ 0x27e1a049, "printk" },
	{ 0x4a344976, "omapdss_sdi_display_enable" },
	{ 0x69c51a7a, "omapdss_sdi_set_datapairs" },
	{ 0x84b183ae, "strncmp" },
	{ 0x97255bdf, "strlen" },
	{ 0xa07e0565, "omapdss_sdi_display_disable" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x16e724ee, "sysfs_create_group" },
	{ 0xba66d9a4, "backlight_device_register" },
	{ 0x4a33461a, "_dev_info" },
	{ 0x1b0d3798, "dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7980c33, "omap_dss_register_driver" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0xb81960ca, "snprintf" },
	{ 0xdfaac44b, "backlight_device_unregister" },
	{ 0xec06ec83, "sysfs_remove_group" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x6da70079, "spi_sync" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x80b964a6, "omapdss_sdi_set_timings" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3aa0b1b3, "omap_dss_unregister_driver" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=omapdss,backlight";


MODULE_INFO(srcversion, "A785CF075F93CEDE15D3794");
