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
	{ 0xf9a482f9, "msleep" },
	{ 0x4cc9e353, "__pm_runtime_idle" },
	{ 0x54564615, "__pm_runtime_disable" },
	{ 0xbdb5219a, "input_unregister_polled_device" },
	{ 0x253bdb78, "param_get_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x3638029d, "pm_runtime_barrier" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x8cde6e68, "remove_wait_queue" },
	{ 0xa12d399d, "no_llseek" },
	{ 0x9c05b970, "input_register_polled_device" },
	{ 0xd76eb8f, "of_property_read_u32_array" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x20e20f94, "__pm_runtime_resume" },
	{ 0x1ae27fd9, "platform_device_register_full" },
	{ 0x83c8a355, "param_set_int" },
	{ 0x91715312, "sprintf" },
	{ 0xec06ec83, "sysfs_remove_group" },
	{ 0x124a4916, "input_set_abs_params" },
	{ 0x8d678d2f, "input_event" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x4f29ed81, "misc_register" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x16e724ee, "sysfs_create_group" },
	{ 0x282c2ebb, "fasync_helper" },
	{ 0x31eca4ba, "input_set_capability" },
	{ 0x370d91a7, "platform_device_unregister" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xaab92751, "input_free_polled_device" },
	{ 0xe27c7a6, "pm_runtime_enable" },
	{ 0x1000e51, "schedule" },
	{ 0x3333a1a, "pm_schedule_suspend" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xdebfd54d, "__pm_runtime_set_status" },
	{ 0xec0164cd, "input_allocate_polled_device" },
	{ 0x8017f205, "of_get_property" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x21659a1a, "__wake_up" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x946796af, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4845c423, "param_array_ops" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xad1c255d, "kill_fasync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0xf617d98a, "misc_deregister" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=input-polldev";


MODULE_INFO(srcversion, "BB04842E2FF15DB53900DFA");
