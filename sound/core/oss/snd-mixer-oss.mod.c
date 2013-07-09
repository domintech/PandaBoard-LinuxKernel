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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x553b6202, "up_read" },
	{ 0x8147dcca, "snd_ctl_find_numid" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xbc823d5a, "snd_card_unref" },
	{ 0xaf5df67b, "snd_card_file_remove" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0xa12d399d, "no_llseek" },
	{ 0xbe9fc41e, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe6af8a46, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeeecb604, "down_read" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xbf28ee60, "snd_ctl_notify" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x4bd61d79, "snd_cards" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x4b015768, "snd_iprintf" },
	{ 0x3ca17104, "__snd_printk" },
	{ 0xf6d75545, "module_put" },
	{ 0x481dfdd, "snd_mixer_oss_notify_callback" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x6b78743d, "snd_card_file_add" },
	{ 0x7eaecebc, "snd_register_oss_device" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0xe0ab66f4, "snd_ctl_find_id" },
	{ 0x20bd7543, "snd_unregister_oss_device" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x2beb418e, "might_fault" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xab77bcd5, "snd_info_free_entry" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xaa0908d, "snd_info_register" },
	{ 0x56d7324a, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "393613509C957A8479904BE");
