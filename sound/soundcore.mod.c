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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x402b8281, "__request_module" },
	{ 0x1559601b, "_raw_spin_unlock" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0xd28956b, "device_destroy" },
	{ 0xab6cee04, "__register_chrdev" },
	{ 0x91715312, "sprintf" },
	{ 0x733c3b54, "kasprintf" },
	{ 0x27e1a049, "printk" },
	{ 0xad6bc83b, "noop_llseek" },
	{ 0x46ea0b67, "device_create" },
	{ 0xf6d75545, "module_put" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x80b8b59, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xacc391c2, "class_destroy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x88515a32, "__class_create" },
	{ 0x56d7324a, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F06EC45805F5FBD391D4455");
