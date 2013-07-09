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
	{ 0x95852fd8, "crypto_unregister_template" },
	{ 0x12ef42c9, "crypto_register_template" },
	{ 0xc2634a48, "crypto_blkcipher_type" },
	{ 0x10890140, "crypto_mod_put" },
	{ 0x21420068, "crypto_alloc_instance" },
	{ 0xb638a4a1, "crypto_attr_alg2" },
	{ 0xd16712f3, "crypto_check_attr_type" },
	{ 0x571bcd59, "crypto_spawn_tfm" },
	{ 0x1ca42862, "crypto_destroy_tfm" },
	{ 0x8d7e9458, "blkcipher_walk_done" },
	{ 0x48fa8ec2, "blkcipher_walk_virt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f3cccb, "crypto_drop_spawn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6242227B6E671B40AD32E1F");
