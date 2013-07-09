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
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2169e3be, "snd_register_device_for_dev" },
	{ 0xbc823d5a, "snd_card_unref" },
	{ 0xaf5df67b, "snd_card_file_remove" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x8cde6e68, "remove_wait_queue" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x91715312, "sprintf" },
	{ 0xb72628e7, "snd_ctl_unregister_ioctl" },
	{ 0xaf8e8fef, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x96716d68, "snd_device_new" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0xe50c8d6a, "snd_unregister_device" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4b015768, "snd_iprintf" },
	{ 0x3ca17104, "__snd_printk" },
	{ 0xf6d75545, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x6b78743d, "snd_card_file_add" },
	{ 0x4c32c4b4, "snd_ctl_register_ioctl" },
	{ 0x1000e51, "schedule" },
	{ 0x7eaecebc, "snd_register_oss_device" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x21659a1a, "__wake_up" },
	{ 0x20bd7543, "snd_unregister_oss_device" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x946796af, "add_wait_queue" },
	{ 0x2beb418e, "might_fault" },
	{ 0x37a0cba, "kfree" },
	{ 0xab77bcd5, "snd_info_free_entry" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x97c41018, "snd_info_create_module_entry" },
	{ 0xaa0908d, "snd_info_register" },
	{ 0x56d7324a, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "8AC52F3E4629A3BBFC28347");
