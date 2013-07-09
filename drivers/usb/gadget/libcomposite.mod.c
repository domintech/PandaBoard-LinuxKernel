#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6ea25cad, "module_layout" },
	{ 0x402b8281, "__request_module" },
	{ 0xe3d6326d, "device_remove_file" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa675804c, "utf8s_to_utf16s" },
	{ 0x1559601b, "_raw_spin_unlock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x5e7f6645, "dev_printk" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0xf9d2b5f8, "usb_gadget_unregister_driver" },
	{ 0x91715312, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xe384a102, "usb_speed_string" },
	{ 0x11089ac7, "_ctype" },
	{ 0x1b0d3798, "dev_err" },
	{ 0x2f2d3cf, "_raw_spin_unlock_irqrestore" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa724257f, "init_uts_ns" },
	{ 0x7e4d3007, "device_create_file" },
	{ 0xf6d75545, "module_put" },
	{ 0x4a33461a, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0x1e06d7c2, "__raw_spin_lock_init" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x80b8b59, "_raw_spin_lock" },
	{ 0x80883441, "_raw_spin_lock_irqsave" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xa25638f4, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x900b36e, "dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0x56d7324a, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1DE25202EF097290CAAA396");
