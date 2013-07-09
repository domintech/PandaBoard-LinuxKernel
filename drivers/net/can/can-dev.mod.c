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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x32e64294, "netif_carrier_on" },
	{ 0xf811a0f3, "skb_clone" },
	{ 0xb5686493, "netif_carrier_off" },
	{ 0x159de811, "init_timer_key" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc799a677, "__netdev_alloc_skb" },
	{ 0x81be13a3, "netif_rx" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xab70ad05, "del_timer_sync" },
	{ 0x27e1a049, "printk" },
	{ 0x15c04d20, "free_netdev" },
	{ 0x962b861, "register_netdev" },
	{ 0xdfbd088e, "nla_put" },
	{ 0xa5882aae, "mod_timer" },
	{ 0x741df263, "rtnl_link_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x88c0b703, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x92ce894c, "alloc_netdev_mqs" },
	{ 0x82c1e38, "netdev_err" },
	{ 0x4dd8a838, "netdev_warn" },
	{ 0xf252f2a4, "rtnl_link_register" },
	{ 0x77b0bf1f, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xef23d3a9, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "35B6B04D255FC6118FA3890");
