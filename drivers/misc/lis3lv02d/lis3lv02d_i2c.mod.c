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
	{ 0xada38534, "regulator_bulk_disable" },
	{ 0xb6cac0d, "lis3lv02d_init_device" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0xcdc80b3e, "regulator_bulk_get" },
	{ 0x9147b898, "lis3lv02d_init_dt" },
	{ 0x1711497e, "of_match_device" },
	{ 0x27e1a049, "printk" },
	{ 0x12a38747, "usleep_range" },
	{ 0x72b212ff, "regulator_bulk_enable" },
	{ 0xe1ce1e1e, "lis3_dev" },
	{ 0x24fc46b6, "regulator_bulk_free" },
	{ 0x495cc159, "lis3lv02d_remove_fs" },
	{ 0xfba60c88, "lis3lv02d_joystick_disable" },
	{ 0x9df6e9a4, "lis3lv02d_poweroff" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1928cbb0, "lis3lv02d_poweron" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0x5d256b2b, "i2c_smbus_read_i2c_block_data" },
	{ 0x94f9fce3, "i2c_smbus_read_byte_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb7bbaa9e, "i2c_smbus_write_byte_data" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");
MODULE_ALIAS("of:N*T*Cst,lis3lv02d*");

MODULE_INFO(srcversion, "16DA533F993D270B2E4A9CB");
