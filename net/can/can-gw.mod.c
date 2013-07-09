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
	{ 0x53c4fe30, "rcu_lock_map" },
	{ 0x4b2c4c39, "kmem_cache_destroy" },
	{ 0xaf5407f3, "can_rx_register" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf811a0f3, "skb_clone" },
	{ 0xef105205, "skb_copy" },
	{ 0x7890ebe2, "__rtnl_register" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x13699f56, "skb_trim" },
	{ 0x4a0e4bde, "lock_release" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfe096515, "lock_acquire" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xdfbd088e, "nla_put" },
	{ 0x4b654507, "kmem_cache_free" },
	{ 0x314d2d59, "dev_get_by_index" },
	{ 0x9625133b, "init_net" },
	{ 0xc75f03aa, "can_send" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2dd919ae, "kmem_cache_alloc" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xa630e2bf, "kmem_cache_create" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbee752ce, "can_rx_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x7022fba, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "6AD7CFF6D7FDB62FBE6284D");
