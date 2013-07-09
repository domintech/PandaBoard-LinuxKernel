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
	{ 0xbda8c0c5, "i2c_del_driver" },
	{ 0x4992277e, "i2c_register_driver" },
	{ 0x4a33461a, "_dev_info" },
	{ 0x458abefb, "hwmon_device_register" },
	{ 0x16e724ee, "sysfs_create_group" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0xe82e8454, "devm_kzalloc" },
	{ 0xec06ec83, "sysfs_remove_group" },
	{ 0xbd20687a, "hwmon_device_unregister" },
	{ 0x7d11c268, "jiffies" },
	{ 0x91715312, "sprintf" },
	{ 0xc8542968, "i2c_smbus_read_word_data" },
	{ 0xb7bbaa9e, "i2c_smbus_write_byte_data" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0xb7d82266, "i2c_smbus_write_word_data" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x94f9fce3, "i2c_smbus_read_byte_data" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:adt75");
MODULE_ALIAS("i2c:ds1775");
MODULE_ALIAS("i2c:ds75");
MODULE_ALIAS("i2c:lm75");
MODULE_ALIAS("i2c:lm75a");
MODULE_ALIAS("i2c:max6625");
MODULE_ALIAS("i2c:max6626");
MODULE_ALIAS("i2c:mcp980x");
MODULE_ALIAS("i2c:stds75");
MODULE_ALIAS("i2c:tcn75");
MODULE_ALIAS("i2c:tmp100");
MODULE_ALIAS("i2c:tmp101");
MODULE_ALIAS("i2c:tmp105");
MODULE_ALIAS("i2c:tmp175");
MODULE_ALIAS("i2c:tmp275");
MODULE_ALIAS("i2c:tmp75");

MODULE_INFO(srcversion, "7BFE4D778AE2FCC51F54ED6");
