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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe592404a, "usb_submit_urb" },
	{ 0xb61a0c3b, "bt_err" },
	{ 0x38bc49cf, "schedule_work" },
	{ 0x89c0ed7c, "lockdep_init_map" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x37dcf84a, "release_firmware" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc63cf48d, "request_firmware" },
	{ 0x7dc5478, "usb_alloc_urb" },
	{ 0xe82e8454, "devm_kzalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x45c3be85, "usb_free_urb" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0xfed2410f, "usb_kill_urb" },
	{ 0x8957be2f, "cancel_work_sync" },
	{ 0xca3430a7, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v0A5Cp2033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "32032CAE9B5113F8AD6EB19");
