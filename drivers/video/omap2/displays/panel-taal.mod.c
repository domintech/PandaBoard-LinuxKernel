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
	{ 0xf660cac3, "omapdss_default_get_recommended_bpp" },
	{ 0x3aa0b1b3, "omap_dss_unregister_driver" },
	{ 0xb7980c33, "omap_dss_register_driver" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x3ea2204f, "schedule_delayed_work" },
	{ 0xf7ebbe5d, "dsi_vc_set_max_rx_packet_size" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x16e724ee, "sysfs_create_group" },
	{ 0xb1ba0e0f, "omap_dsi_set_vc_id" },
	{ 0x99c5b31a, "omap_dsi_request_vc" },
	{ 0xba66d9a4, "backlight_device_register" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x71b629b8, "__alloc_workqueue_key" },
	{ 0x159de811, "init_timer_key" },
	{ 0x89c0ed7c, "lockdep_init_map" },
	{ 0x84bfab5f, "devm_request_threaded_irq" },
	{ 0x597b9896, "devm_gpio_request_one" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d669763, "memcpy" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0xe82e8454, "devm_kzalloc" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdfaac44b, "backlight_device_unregister" },
	{ 0xa341c55e, "omap_dsi_release_vc" },
	{ 0xec06ec83, "sysfs_remove_group" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0x4a33461a, "_dev_info" },
	{ 0xd5775768, "dsi_enable_video_output" },
	{ 0x8e9e4c32, "omapdss_dsi_vc_enable_hs" },
	{ 0xb31792d2, "omapdss_dsi_display_enable" },
	{ 0x52bc4d67, "omapdss_dsi_set_clocks" },
	{ 0x266164d3, "omapdss_dsi_set_operation_mode" },
	{ 0x87295008, "omapdss_dsi_set_pixel_format" },
	{ 0x3769df70, "omapdss_dsi_set_size" },
	{ 0xde705c79, "omapdss_dsi_configure_pins" },
	{ 0xd649f7ae, "omapdss_dsi_display_disable" },
	{ 0x58d77768, "dsi_disable_video_output" },
	{ 0xb81960ca, "snprintf" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x61fc2acf, "omap_dsi_update" },
	{ 0xe7d7778b, "dsi_vc_send_bta_sync" },
	{ 0x73dc0d8b, "dsi_vc_dcs_write_nosync" },
	{ 0x1d7a2f81, "queue_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3ba33c67, "cancel_delayed_work" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xa5444203, "omapdss_dsi_enable_te" },
	{ 0xf9a482f9, "msleep" },
	{ 0x86b3b436, "dsi_vc_dcs_write" },
	{ 0x8d472bf1, "dsi_bus_lock" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1b0d3798, "dev_err" },
	{ 0xfbb1233b, "dsi_bus_unlock" },
	{ 0xf8c04852, "dsi_vc_dcs_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xca3430a7, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=omapdss,backlight";


MODULE_INFO(srcversion, "8B4E5A71499661D5E896D3B");
