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
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2169e3be, "snd_register_device_for_dev" },
	{ 0xbc823d5a, "snd_card_unref" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xaf8e8fef, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x96716d68, "snd_device_new" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe50c8d6a, "snd_unregister_device" },
	{ 0x8f595b11, "snd_major" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x21659a1a, "__wake_up" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x2beb418e, "might_fault" },
	{ 0x37a0cba, "kfree" },
	{ 0xd470c5d0, "snd_card_free" },
	{ 0x2dc8a7b4, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "77454AC0B4A15EB05C06621");
