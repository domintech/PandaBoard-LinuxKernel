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
	{ 0x54fb9176, "skb_queue_head" },
	{ 0x8cff0dbb, "_raw_spin_lock_irqsave_nested" },
	{ 0x1559601b, "_raw_spin_unlock" },
	{ 0x3a351abf, "hci_recv_stream_fragment" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x38bb6baa, "del_timer" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0xa31c64f3, "hci_register_dev" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x7acc943d, "tty_unthrottle" },
	{ 0x38bc49cf, "schedule_work" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x159de811, "init_timer_key" },
	{ 0x44c9d061, "hci_recv_frame" },
	{ 0x1fcd0074, "hci_unregister_dev" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x7d11c268, "jiffies" },
	{ 0x13699f56, "skb_trim" },
	{ 0xb61a0c3b, "bt_err" },
	{ 0x7c640527, "bt_info" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x4e562df1, "skb_queue_purge" },
	{ 0x2f2d3cf, "_raw_spin_unlock_irqrestore" },
	{ 0x71c90087, "memcmp" },
	{ 0xfb2c1549, "tty_ldisc_flush" },
	{ 0xcb3eb110, "n_tty_ioctl_helper" },
	{ 0x2a7f6bec, "hci_alloc_dev" },
	{ 0xe433bf60, "skb_push" },
	{ 0xa5882aae, "mod_timer" },
	{ 0xa15f23a, "skb_pull" },
	{ 0xc90f7849, "skb_queue_tail" },
	{ 0xe0fb6d48, "__alloc_skb" },
	{ 0x410d92ef, "tty_driver_flush_buffer" },
	{ 0x88c0b703, "kfree_skb" },
	{ 0x1e06d7c2, "__raw_spin_lock_init" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x80b8b59, "_raw_spin_lock" },
	{ 0x80883441, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x215ebd78, "bitrev16" },
	{ 0x89c0ed7c, "lockdep_init_map" },
	{ 0xcc451572, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc004cba0, "hci_free_dev" },
	{ 0xe7316819, "tty_register_ldisc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xef23d3a9, "skb_put" },
	{ 0xca3430a7, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "5CB1A9F6D523C71F156FDF9");
