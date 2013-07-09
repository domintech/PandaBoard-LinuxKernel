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
	{ 0xeb87227d, "platform_driver_probe" },
	{ 0xa8232c78, "strtobool" },
	{ 0xe3d6326d, "device_remove_file" },
	{ 0xf4a7fc6d, "omapdss_compat_init" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x553b6202, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x27864d57, "memparse" },
	{ 0x349cba85, "strchr" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x25de812e, "framebuffer_release" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x71b629b8, "__alloc_workqueue_key" },
	{ 0xfb5fa885, "omap_dss_get_overlay_manager" },
	{ 0xe82e8454, "devm_kzalloc" },
	{ 0xffd2cf99, "omap_dss_get_num_overlay_managers" },
	{ 0x75bef40e, "arm_dma_ops" },
	{ 0x7fa64cca, "omap_dss_pal_timings" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x223cc898, "omap_vrfb_max_height" },
	{ 0xdca35d54, "omap_dss_get_overlay" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x47d71388, "cfb_fillrect" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x159de811, "init_timer_key" },
	{ 0x6f85075b, "cancel_delayed_work_sync" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xf6f3cef6, "omap_vrfb_setup" },
	{ 0xa1044b26, "down_write_nested" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x55a8b55a, "omap_dss_put_device" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x54f6830a, "omapdss_get_default_display_name" },
	{ 0x99b1252a, "cfb_imageblit" },
	{ 0x1b0d3798, "dev_err" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xc0cf95f9, "omap_vrfb_request_ctx" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x79791c75, "omap_dss_get_next_device" },
	{ 0x40470924, "register_framebuffer" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x308aad56, "omap_vrfb_min_phys_size" },
	{ 0x373db350, "kstrtoint" },
	{ 0x911d82e5, "up_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x80d81308, "omap_vrfb_release_ctx" },
	{ 0x7e4d3007, "device_create_file" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xca6ce8ba, "omap_dss_ntsc_timings" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xf853bbca, "omap_vrfb_map_angle" },
	{ 0xb0c8d7df, "fb_find_mode" },
	{ 0xc2165d85, "__arm_iounmap" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xff9ca065, "fb_edid_to_monspecs" },
	{ 0x1dc36131, "fb_destroy_modedb" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0xc0d84fe7, "framebuffer_alloc" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x2beb418e, "might_fault" },
	{ 0x4c33081d, "omapdss_compat_uninit" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x4f3e10ca, "down_read_nested" },
	{ 0x83f9f651, "remap_pfn_range" },
	{ 0x9d669763, "memcpy" },
	{ 0x5d92b29a, "omap_dss_get_device" },
	{ 0xb7260e1e, "lock_fb_info" },
	{ 0x1a20c540, "omap_vrfb_supported" },
	{ 0x89c0ed7c, "lockdep_init_map" },
	{ 0x900b36e, "dev_warn" },
	{ 0x8f0d33d1, "cfb_copyarea" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x636b3461, "omap_dss_get_num_overlays" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1fec7798, "platform_driver_unregister" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0x25e0dc15, "__init_rwsem" },
	{ 0x1d7a2f81, "queue_delayed_work" },
	{ 0xc965f1db, "unregister_framebuffer" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=omapdss,cfbfillrect,cfbimgblt,cfbcopyarea";


MODULE_INFO(srcversion, "ED86414729C305B4A6A386D");
