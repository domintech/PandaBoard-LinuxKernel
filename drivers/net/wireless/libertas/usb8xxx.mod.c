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
	{ 0x7051a71e, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1559601b, "_raw_spin_unlock" },
	{ 0xb7ebbf3f, "lbs_host_sleep_cfg" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x8d354593, "lbs_resume" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0xfed2410f, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x159de811, "init_timer_key" },
	{ 0xe2866681, "lbs_stop_card" },
	{ 0xdb12e502, "__lbs_cmd" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc799a677, "__netdev_alloc_skb" },
	{ 0xaf8e8fef, "__init_waitqueue_head" },
	{ 0xd6db3176, "lbs_start_card" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xab70ad05, "del_timer_sync" },
	{ 0x748f12f5, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0xba1ad895, "lbs_queue_event" },
	{ 0xda833433, "lbs_send_tx_feedback" },
	{ 0xa5882aae, "mod_timer" },
	{ 0x69df89bb, "lbs_get_firmware_async" },
	{ 0x17fbbaeb, "lbs_cmd_copyback" },
	{ 0xe9f8eb50, "lbs_suspend" },
	{ 0xa15f23a, "skb_pull" },
	{ 0xf64277de, "lbs_debug" },
	{ 0x23ca23b4, "lbs_remove_card" },
	{ 0xf9f7496f, "lbs_process_rxed_packet" },
	{ 0xe592404a, "usb_submit_urb" },
	{ 0x549fad92, "usb_get_dev" },
	{ 0x22922f04, "usb_reset_device" },
	{ 0xf9b3c44b, "lbs_host_to_card_done" },
	{ 0xb35ec380, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x88c0b703, "kfree_skb" },
	{ 0xf1e7d737, "lbs_add_card" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x80b8b59, "_raw_spin_lock" },
	{ 0x21659a1a, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa563be3c, "prepare_to_wait" },
	{ 0x605aaf29, "usb_register_driver" },
	{ 0xadcb92c, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xef23d3a9, "skb_put" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0x45c3be85, "usb_free_urb" },
	{ 0x37dcf84a, "release_firmware" },
	{ 0x7dc5478, "usb_alloc_urb" },
	{ 0x708fd377, "lbs_notify_command_response" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D9E827EAD8BBC7732F902FA");
