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
	{ 0x553b6202, "up_read" },
	{ 0x1559601b, "_raw_spin_unlock" },
	{ 0x3ad12a05, "mutex_destroy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0xfed2410f, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x159de811, "init_timer_key" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0xbf1b4774, "snd_rawmidi_set_ops" },
	{ 0x7d11c268, "jiffies" },
	{ 0x372eaa77, "snd_rawmidi_new" },
	{ 0xeeecb604, "down_read" },
	{ 0xaf8e8fef, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xab70ad05, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x2f2d3cf, "_raw_spin_unlock_irqrestore" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0x6aefbf73, "usb_set_interface" },
	{ 0xbf28ee60, "snd_ctl_notify" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x891edc65, "usb_control_msg" },
	{ 0x6b51a1fd, "_raw_spin_unlock_irq" },
	{ 0xe9e3c4f8, "snd_rawmidi_transmit_peek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xa5882aae, "mod_timer" },
	{ 0x1f644f47, "usb_free_coherent" },
	{ 0x911d82e5, "up_write" },
	{ 0x78c5f004, "down_write" },
	{ 0x3ca17104, "__snd_printk" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xe592404a, "usb_submit_urb" },
	{ 0xdf304d8e, "snd_rawmidi_transmit_ack" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x43fa7497, "usb_bulk_msg" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x14705d05, "_raw_spin_lock_irq" },
	{ 0x721d01af, "snd_ctl_new1" },
	{ 0x1e06d7c2, "__raw_spin_lock_init" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x80b8b59, "_raw_spin_lock" },
	{ 0x80883441, "_raw_spin_lock_irqsave" },
	{ 0x21659a1a, "__wake_up" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x8489b3e1, "usb_autopm_get_interface_no_resume" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa563be3c, "prepare_to_wait" },
	{ 0xadcb92c, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xbd26ccf9, "usb_alloc_coherent" },
	{ 0xe735925c, "snd_ctl_add" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x4bb02651, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x81e7a32c, "snd_rawmidi_transmit_empty" },
	{ 0x45c3be85, "usb_free_urb" },
	{ 0x25e0dc15, "__init_rwsem" },
	{ 0x61ecc9bd, "snd_rawmidi_receive" },
	{ 0x7dc5478, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd";


MODULE_INFO(srcversion, "1EF9E283720C6D6BC41714D");
