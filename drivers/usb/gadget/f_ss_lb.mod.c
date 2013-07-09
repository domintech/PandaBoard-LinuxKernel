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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9446c1b8, "usb_free_all_descriptors" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5e7f6645, "dev_printk" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x787358a2, "usb_function_unregister" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x1b0d3798, "dev_err" },
	{ 0x63a6fc01, "usb_ep_autoconfig" },
	{ 0x1999afcb, "usb_function_register" },
	{ 0x20e85c35, "config_ep_by_speed" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x467716d7, "usb_string_id" },
	{ 0xa046b69d, "usb_assign_descriptors" },
	{ 0xb313ddf8, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "4B35CC60880F0611431D8D2");
