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
	{ 0x402b8281, "__request_module" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x1559601b, "_raw_spin_unlock" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x38bb6baa, "del_timer" },
	{ 0x2169e3be, "snd_register_device_for_dev" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x8cde6e68, "remove_wait_queue" },
	{ 0x46608fa0, "getnstimeofday" },
	{ 0xa12d399d, "no_llseek" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x159de811, "init_timer_key" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe6af8a46, "nonseekable_open" },
	{ 0x7d11c268, "jiffies" },
	{ 0xaf8e8fef, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x96716d68, "snd_device_new" },
	{ 0x2f2d3cf, "_raw_spin_unlock_irqrestore" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0xe50c8d6a, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x282c2ebb, "fasync_helper" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x6b51a1fd, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x193ef101, "add_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x4b015768, "snd_iprintf" },
	{ 0x3ca17104, "__snd_printk" },
	{ 0xf6d75545, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x1000e51, "schedule" },
	{ 0x14705d05, "_raw_spin_lock_irq" },
	{ 0x1e06d7c2, "__raw_spin_lock_init" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x80b8b59, "_raw_spin_lock" },
	{ 0x80883441, "_raw_spin_lock_irqsave" },
	{ 0xce46e140, "ktime_get_ts" },
	{ 0x21659a1a, "__wake_up" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x946796af, "add_wait_queue" },
	{ 0x2beb418e, "might_fault" },
	{ 0x37a0cba, "kfree" },
	{ 0xab77bcd5, "snd_info_free_entry" },
	{ 0xad1c255d, "kill_fasync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x97c41018, "snd_info_create_module_entry" },
	{ 0xaa0908d, "snd_info_register" },
	{ 0x56d7324a, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "B27B6D394B8D52A14F91487");
