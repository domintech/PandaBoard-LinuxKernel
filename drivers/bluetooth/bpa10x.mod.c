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
	{ 0x748f12f5, "usb_deregister" },
	{ 0x605aaf29, "usb_register_driver" },
	{ 0xe0fb6d48, "__alloc_skb" },
	{ 0x44c9d061, "hci_recv_frame" },
	{ 0x9d669763, "memcpy" },
	{ 0xef23d3a9, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x122b4346, "usb_kill_anchored_urbs" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x7c09899e, "usb_unanchor_urb" },
	{ 0xb61a0c3b, "bt_err" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0xe592404a, "usb_submit_urb" },
	{ 0x8d24ddf4, "usb_anchor_urb" },
	{ 0x45c3be85, "usb_free_urb" },
	{ 0xe433bf60, "skb_push" },
	{ 0x7dc5478, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xa31c64f3, "hci_register_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a7f6bec, "hci_alloc_dev" },
	{ 0x1e06d7c2, "__raw_spin_lock_init" },
	{ 0xaf8e8fef, "__init_waitqueue_head" },
	{ 0xe82e8454, "devm_kzalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x88c0b703, "kfree_skb" },
	{ 0xc004cba0, "hci_free_dev" },
	{ 0x1fcd0074, "hci_unregister_dev" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0xca3430a7, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D5AEEC9C8BDFABBB00DE517");
