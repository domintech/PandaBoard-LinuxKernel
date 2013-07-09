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
	{ 0x1fec7798, "platform_driver_unregister" },
	{ 0x6ff41902, "platform_driver_register" },
	{ 0x6b51a1fd, "_raw_spin_unlock_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x14705d05, "_raw_spin_lock_irq" },
	{ 0x9d669763, "memcpy" },
	{ 0x8d678d2f, "input_event" },
	{ 0x956a91ba, "gpio_get_value_cansleep" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x3441c3d6, "gpio_set_value_cansleep" },
	{ 0x2f2d3cf, "_raw_spin_unlock_irqrestore" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x80883441, "_raw_spin_lock_irqsave" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x3757c9b, "of_get_named_gpio_flags" },
	{ 0xd76eb8f, "of_property_read_u32_array" },
	{ 0x8017f205, "of_get_property" },
	{ 0x45e15b32, "of_count_phandle_with_args" },
	{ 0xe82e8454, "devm_kzalloc" },
	{ 0x90c6d737, "input_register_device" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xc61056aa, "input_free_device" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x1b0d3798, "dev_err" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0x31eca4ba, "input_set_capability" },
	{ 0xc8040c2d, "matrix_keypad_build_keymap" },
	{ 0x1e06d7c2, "__raw_spin_lock_init" },
	{ 0x159de811, "init_timer_key" },
	{ 0x89c0ed7c, "lockdep_init_map" },
	{ 0x9426aeb0, "input_allocate_device" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd951fe6, "input_unregister_device" },
	{ 0xfd5c4aa0, "device_init_wakeup" },
	{ 0xfe990052, "gpio_free" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xbec97192, "flush_work" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xac8f37b2, "outer_cache" },
	{ 0x3ea2204f, "schedule_delayed_work" },
	{ 0xca3430a7, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgpio-matrix-keypad*");

MODULE_INFO(srcversion, "B8244E494ACA89466342892");
