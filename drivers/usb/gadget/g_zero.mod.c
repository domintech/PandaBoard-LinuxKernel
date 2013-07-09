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
	{ 0x38bb6baa, "del_timer" },
	{ 0x5e7f6645, "dev_printk" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x159de811, "init_timer_key" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4887b413, "usb_ep_autoconfig_reset" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xab70ad05, "del_timer_sync" },
	{ 0x75be6f54, "usb_put_function_instance" },
	{ 0xa5882aae, "mod_timer" },
	{ 0xff0bbecc, "usb_composite_overwrite_options" },
	{ 0x4a33461a, "_dev_info" },
	{ 0x583a81a6, "usb_composite_probe" },
	{ 0xcf6a098e, "usb_add_function" },
	{ 0x372f7d64, "usb_put_function" },
	{ 0x57c3ac0b, "usb_composite_unregister" },
	{ 0x7bf29362, "usb_get_function" },
	{ 0xce633e6c, "usb_string_ids_tab" },
	{ 0x2c1d4b6d, "usb_add_config_only" },
	{ 0x610c7f4c, "usb_get_function_instance" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x487d9343, "param_ops_ushort" },
	{ 0x6d044c26, "param_ops_uint" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "5F144E418268C32842A2D25");
