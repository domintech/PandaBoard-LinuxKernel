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
	{ 0xe9c81184, "single_open" },
	{ 0x75bef40e, "arm_dma_ops" },
	{ 0xc36a4f96, "single_release" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x4644a9f3, "seq_printf" },
	{ 0xc9121d3b, "remove_proc_entry" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0x88f90d72, "seq_read" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xdeb2cdfe, "proc_create_data" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0xdc938534, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "29E02E7D3777951A8D6E1CF");
