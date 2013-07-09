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
	{ 0x140eae26, "class_find_device" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5934392b, "fb_register_client" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x4be2a4d0, "device_register" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x70a251bc, "kobject_uevent_env" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xc1387930, "sysfs_notify" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xacc391c2, "class_destroy" },
	{ 0xcc36f32e, "fb_unregister_client" },
	{ 0xa449cd18, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa7cffb5b, "dev_set_name" },
	{ 0x88515a32, "__class_create" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DBB936CCE36DCF953BC3592");
