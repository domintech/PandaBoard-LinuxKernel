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
	{ 0x8ac45547, "release_sock" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xaf5407f3, "can_rx_register" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8653e064, "can_proto_unregister" },
	{ 0xf811a0f3, "skb_clone" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xc3907c12, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x38d9e161, "skb_recv_datagram" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xe54f0cf8, "sock_no_sendpage" },
	{ 0x4365619b, "sock_no_mmap" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xe2f87815, "sock_no_socketpair" },
	{ 0x27e1a049, "printk" },
	{ 0x32db96da, "lock_sock_nested" },
	{ 0x9707fb40, "sock_no_listen" },
	{ 0x4de63a13, "sock_no_accept" },
	{ 0x3b618cda, "sk_free" },
	{ 0x314d2d59, "dev_get_by_index" },
	{ 0x9625133b, "init_net" },
	{ 0x4c9c7a14, "sock_no_shutdown" },
	{ 0x2c8f1b62, "can_ioctl" },
	{ 0xc75f03aa, "can_send" },
	{ 0xfe273bf5, "__sock_recv_ts_and_drops" },
	{ 0x9ceb163c, "memcpy_toiovec" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xf7752e9b, "datagram_poll" },
	{ 0x88c0b703, "kfree_skb" },
	{ 0xc5cc0cda, "can_proto_register" },
	{ 0x378b606a, "sock_alloc_send_skb" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x22eaff87, "sock_no_connect" },
	{ 0x9f646c6, "_raw_write_unlock_bh" },
	{ 0x2beb418e, "might_fault" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fb3dd30, "memcpy_fromiovec" },
	{ 0x69dda656, "_raw_write_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xbee752ce, "can_rx_unregister" },
	{ 0x87f656cc, "sock_tx_timestamp" },
	{ 0xef23d3a9, "skb_put" },
	{ 0x30a90cb, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "B5FC193FBB31665E6F229BB");
