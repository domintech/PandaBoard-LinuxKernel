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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc7d7a70e, "put_pid" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x553b6202, "up_read" },
	{ 0x1ad1f2e7, "_memcpy_fromio" },
	{ 0x1559601b, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5eac6530, "proc_symlink" },
	{ 0x97255bdf, "strlen" },
	{ 0xa5cef8ad, "release_resource" },
	{ 0x80d5a256, "sound_class" },
	{ 0xbbb6ed49, "_raw_write_lock_irqsave" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x63ca549b, "pid_vnr" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x8cde6e68, "remove_wait_queue" },
	{ 0xa12d399d, "no_llseek" },
	{ 0xc3f249c3, "_raw_read_lock" },
	{ 0xc9121d3b, "remove_proc_entry" },
	{ 0xd28956b, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xab6cee04, "__register_chrdev" },
	{ 0x9b87e401, "__rwlock_init" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe6af8a46, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeeecb604, "down_read" },
	{ 0x1c8ac34d, "_raw_write_unlock_irqrestore" },
	{ 0x8d678d2f, "input_event" },
	{ 0xaf8e8fef, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd111981d, "proc_mkdir" },
	{ 0x11089ac7, "_ctype" },
	{ 0x2f2d3cf, "_raw_spin_unlock_irqrestore" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x89ca5dcd, "_raw_read_unlock" },
	{ 0x7c1372e8, "panic" },
	{ 0x282c2ebb, "fasync_helper" },
	{ 0x6b51a1fd, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x31eca4ba, "input_set_capability" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xad6bc83b, "noop_llseek" },
	{ 0x46ea0b67, "device_create" },
	{ 0xa724257f, "init_uts_ns" },
	{ 0x911d82e5, "up_write" },
	{ 0x78c5f004, "down_write" },
	{ 0x7f63b31e, "_memcpy_toio" },
	{ 0x61651be, "strcat" },
	{ 0x7e4d3007, "device_create_file" },
	{ 0xf6d75545, "module_put" },
	{ 0x9f984513, "strrchr" },
	{ 0xee35d285, "register_sound_special_device" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x90c6d737, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x14705d05, "_raw_spin_lock_irq" },
	{ 0xc61056aa, "input_free_device" },
	{ 0x1e06d7c2, "__raw_spin_lock_init" },
	{ 0xb731a590, "create_proc_entry" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x80b8b59, "_raw_spin_lock" },
	{ 0x80883441, "_raw_spin_lock_irqsave" },
	{ 0x7afa89fc, "vsnprintf" },
	{ 0x21659a1a, "__wake_up" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x946796af, "add_wait_queue" },
	{ 0x2beb418e, "might_fault" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xcd951fe6, "input_unregister_device" },
	{ 0xa563be3c, "prepare_to_wait" },
	{ 0x4845c423, "param_array_ops" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0xad1c255d, "kill_fasync" },
	{ 0xadcb92c, "finish_wait" },
	{ 0xa449cd18, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0x25e0dc15, "__init_rwsem" },
	{ 0x56d7324a, "try_module_get" },
	{ 0xb859f38b, "krealloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9426aeb0, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=soundcore";


MODULE_INFO(srcversion, "36B0BA62E10031D52DB6400");
