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
	{ 0x7051a71e, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4cc9e353, "__pm_runtime_idle" },
	{ 0xc8db7199, "register_candev" },
	{ 0x54564615, "__pm_runtime_disable" },
	{ 0xe62c16bd, "alloc_can_err_skb" },
	{ 0x3405c401, "napi_complete" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x20e20f94, "__pm_runtime_resume" },
	{ 0x10647396, "alloc_candev" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc262d9ca, "can_bus_off" },
	{ 0x4c0f58fe, "close_candev" },
	{ 0x27e1a049, "printk" },
	{ 0xc64a7858, "netif_receive_skb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf49bd9c3, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x4bbbe745, "free_candev" },
	{ 0xad12161a, "unregister_candev" },
	{ 0xbf878ca0, "alloc_can_skb" },
	{ 0xe27c7a6, "pm_runtime_enable" },
	{ 0xa6bee27f, "__napi_schedule" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x88c0b703, "kfree_skb" },
	{ 0x82c1e38, "netdev_err" },
	{ 0x2c3dbc55, "open_candev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa1d9a9e5, "can_get_echo_skb" },
	{ 0x80e2651f, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xa965d892, "can_put_echo_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";


MODULE_INFO(srcversion, "2066104ED13795A4D7F76EB");
