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
	{ 0x8ac45547, "release_sock" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xaf5407f3, "can_rx_register" },
	{ 0xe9c81184, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3097c09c, "hrtimer_forward" },
	{ 0x7af5f91e, "sock_no_setsockopt" },
	{ 0xe466b737, "sock_no_getsockopt" },
	{ 0xc36a4f96, "single_release" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x9a32412f, "hrtimer_cancel" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x8653e064, "can_proto_unregister" },
	{ 0x4644a9f3, "seq_printf" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x2ccd5d29, "sock_no_getname" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0xc9121d3b, "remove_proc_entry" },
	{ 0xc3907c12, "sock_queue_rcv_skb" },
	{ 0x38d9e161, "skb_recv_datagram" },
	{ 0xd2484c9c, "sock_i_ino" },
	{ 0x91715312, "sprintf" },
	{ 0x88f90d72, "seq_read" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xe54f0cf8, "sock_no_sendpage" },
	{ 0x4a0e4bde, "lock_release" },
	{ 0x4365619b, "sock_no_mmap" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfe096515, "lock_acquire" },
	{ 0xe2f87815, "sock_no_socketpair" },
	{ 0xd111981d, "proc_mkdir" },
	{ 0x27e1a049, "printk" },
	{ 0xfad27a12, "sock_no_bind" },
	{ 0x32db96da, "lock_sock_nested" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe371b92, "seq_putc" },
	{ 0x9707fb40, "sock_no_listen" },
	{ 0x4de63a13, "sock_no_accept" },
	{ 0xccce5a81, "dev_get_by_index_rcu" },
	{ 0x3b618cda, "sk_free" },
	{ 0x314d2d59, "dev_get_by_index" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9625133b, "init_net" },
	{ 0x4c9c7a14, "sock_no_shutdown" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x2c8f1b62, "can_ioctl" },
	{ 0xc75f03aa, "can_send" },
	{ 0xfe273bf5, "__sock_recv_ts_and_drops" },
	{ 0x9ceb163c, "memcpy_toiovec" },
	{ 0xe0fb6d48, "__alloc_skb" },
	{ 0xf7752e9b, "datagram_poll" },
	{ 0x88c0b703, "kfree_skb" },
	{ 0x6df078bd, "hrtimer_start" },
	{ 0xc5cc0cda, "can_proto_register" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x9f646c6, "_raw_write_unlock_bh" },
	{ 0xdeb2cdfe, "proc_create_data" },
	{ 0xdc938534, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x9fb3dd30, "memcpy_fromiovec" },
	{ 0x5066a9a1, "hrtimer_init" },
	{ 0x69dda656, "_raw_write_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbee752ce, "can_rx_unregister" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xef23d3a9, "skb_put" },
	{ 0xe914e41e, "strcpy" },
	{ 0x30a90cb, "skb_free_datagram" },
	{ 0x4cdb3178, "ns_to_timeval" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "522ABE83E8CD752799481B9");
