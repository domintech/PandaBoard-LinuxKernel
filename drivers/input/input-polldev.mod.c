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
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x159de811, "init_timer_key" },
	{ 0x6f85075b, "cancel_delayed_work_sync" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xec06ec83, "sysfs_remove_group" },
	{ 0x16e724ee, "sysfs_create_group" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x90c6d737, "input_register_device" },
	{ 0xc61056aa, "input_free_device" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0xde0e1ad4, "get_device" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xcd951fe6, "input_unregister_device" },
	{ 0x89c0ed7c, "lockdep_init_map" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0x1d7a2f81, "queue_delayed_work" },
	{ 0x9426aeb0, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F8FB34A79125D22B34B07B6");
