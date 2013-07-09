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
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0xba66d9a4, "backlight_device_register" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x27e1a049, "printk" },
	{ 0x6ff41902, "platform_driver_register" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1fec7798, "platform_driver_unregister" },
	{ 0xdfaac44b, "backlight_device_unregister" },
	{ 0xca3430a7, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=backlight";


MODULE_INFO(srcversion, "4BB70FBEFB22501B4A455AE");
