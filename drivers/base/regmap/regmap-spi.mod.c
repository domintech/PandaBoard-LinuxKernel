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
	{ 0x8315589a, "malloc_sizes" },
	{ 0xdc94ca95, "regmap_init" },
	{ 0x6e1d18f5, "regmap_async_complete_cb" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x2a273136, "spi_async" },
	{ 0x6da70079, "spi_sync" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x988c702, "spi_write_then_read" },
	{ 0x66d8d090, "devm_regmap_init" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "22187C0D971EBCB0409832C");
