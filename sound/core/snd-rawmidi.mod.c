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
	{ 0xf9a482f9, "msleep" },
	{ 0xc7d7a70e, "put_pid" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2169e3be, "snd_register_device_for_dev" },
	{ 0xbc823d5a, "snd_card_unref" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xaf5df67b, "snd_card_file_remove" },
	{ 0x63ca549b, "pid_vnr" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x8cde6e68, "remove_wait_queue" },
	{ 0xa12d399d, "no_llseek" },
	{ 0xc3f249c3, "_raw_read_lock" },
	{ 0xbe9fc41e, "snd_info_create_card_entry" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x38bc49cf, "schedule_work" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x8957be2f, "cancel_work_sync" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x91715312, "sprintf" },
	{ 0xe6af8a46, "nonseekable_open" },
	{ 0xb72628e7, "snd_ctl_unregister_ioctl" },
	{ 0xaf8e8fef, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x96716d68, "snd_device_new" },
	{ 0x2f2d3cf, "_raw_spin_unlock_irqrestore" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0x89ca5dcd, "_raw_read_unlock" },
	{ 0xe50c8d6a, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x6b51a1fd, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4b015768, "snd_iprintf" },
	{ 0x3ca17104, "__snd_printk" },
	{ 0xf6d75545, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x6b78743d, "snd_card_file_add" },
	{ 0x4c32c4b4, "snd_ctl_register_ioctl" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x14705d05, "_raw_spin_lock_irq" },
	{ 0x7eaecebc, "snd_register_oss_device" },
	{ 0x1e06d7c2, "__raw_spin_lock_init" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x80883441, "_raw_spin_lock_irqsave" },
	{ 0x21659a1a, "__wake_up" },
	{ 0x20bd7543, "snd_unregister_oss_device" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x946796af, "add_wait_queue" },
	{ 0x2beb418e, "might_fault" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xab77bcd5, "snd_info_free_entry" },
	{ 0xa563be3c, "prepare_to_wait" },
	{ 0x4845c423, "param_array_ops" },
	{ 0x89c0ed7c, "lockdep_init_map" },
	{ 0xadcb92c, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xaa0908d, "snd_info_register" },
	{ 0x56d7324a, "try_module_get" },
	{ 0xb859f38b, "krealloc" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "9C2A8D721BE25EBEE5788E5");
