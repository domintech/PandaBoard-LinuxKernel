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
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x16e724ee, "sysfs_create_group" },
	{ 0x94f9fce3, "i2c_smbus_read_byte_data" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0x4a33461a, "_dev_info" },
	{ 0x1b0d3798, "dev_err" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x91715312, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xec06ec83, "sysfs_remove_group" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc52583eb, "i2c_smbus_write_byte" },
	{ 0xca3430a7, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tsl2550");

MODULE_INFO(srcversion, "F675626149EC673F3EDC5C0");
