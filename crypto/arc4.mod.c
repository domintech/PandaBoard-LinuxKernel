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
	{ 0xc2634a48, "crypto_blkcipher_type" },
	{ 0xc7ac2287, "crypto_unregister_algs" },
	{ 0x52e9bde3, "crypto_register_algs" },
	{ 0x8d7e9458, "blkcipher_walk_done" },
	{ 0x48fa8ec2, "blkcipher_walk_virt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1454426C0AA4B28624B4C42");
