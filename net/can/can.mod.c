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
	{ 0x402b8281, "__request_module" },
	{ 0xfcb45ee9, "sock_init_data" },
	{ 0x1559601b, "_raw_spin_unlock" },
	{ 0xe9c81184, "single_open" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc36a4f96, "single_release" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x219a23fa, "seq_puts" },
	{ 0xf811a0f3, "skb_clone" },
	{ 0x4644a9f3, "seq_printf" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xc9121d3b, "remove_proc_entry" },
	{ 0x159de811, "init_timer_key" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x88f90d72, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x4a0e4bde, "lock_release" },
	{ 0x3bccb29e, "sock_get_timestamp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xab70ad05, "del_timer_sync" },
	{ 0x4e562df1, "skb_queue_purge" },
	{ 0xfe096515, "lock_acquire" },
	{ 0xcad66c86, "netif_rx_ni" },
	{ 0xd111981d, "proc_mkdir" },
	{ 0xee5af5d1, "sk_alloc" },
	{ 0x27e1a049, "printk" },
	{ 0xe371b92, "seq_putc" },
	{ 0x4b654507, "kmem_cache_free" },
	{ 0x3b618cda, "sk_free" },
	{ 0xb2ad9a1b, "dev_remove_pack" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xa5882aae, "mod_timer" },
	{ 0x9625133b, "init_net" },
	{ 0xf6d75545, "module_put" },
	{ 0xccda33a2, "proto_register" },
	{ 0x2dd919ae, "kmem_cache_alloc" },
	{ 0x4bb55b5a, "sock_register" },
	{ 0xfbc1eeb8, "___ratelimit" },
	{ 0x88c0b703, "kfree_skb" },
	{ 0x701cf84f, "proto_unregister" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x80b8b59, "_raw_spin_lock" },
	{ 0xa630e2bf, "kmem_cache_create" },
	{ 0x9f646c6, "_raw_write_unlock_bh" },
	{ 0xdeb2cdfe, "proc_create_data" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xdc938534, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xa75312bc, "call_rcu_sched" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x69dda656, "_raw_write_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x17467305, "dev_add_pack" },
	{ 0x2e42dd32, "consume_skb" },
	{ 0x8ff6e7a2, "dev_queue_xmit" },
	{ 0x56d7324a, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1E9383F8BFB8311195F7C83");
