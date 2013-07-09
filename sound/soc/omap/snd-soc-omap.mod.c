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
	{ 0x21fffa5e, "snd_soc_unregister_platform" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x75bef40e, "arm_dma_ops" },
	{ 0xa024771, "snd_soc_set_runtime_hwparams" },
	{ 0x29836ade, "snd_hwparams_to_dma_slave_config" },
	{ 0x6e094aa3, "snd_dmaengine_pcm_pointer" },
	{ 0x160d3d01, "snd_dmaengine_pcm_open" },
	{ 0x6ff41902, "platform_driver_register" },
	{ 0xdc191cc, "snd_pcm_lib_ioctl" },
	{ 0x7a43e9a8, "omap_dma_filter_fn" },
	{ 0x2fc24a4a, "snd_dmaengine_pcm_close" },
	{ 0x2c8da597, "snd_soc_register_platform" },
	{ 0x6c3dfa7b, "snd_dmaengine_pcm_get_chan" },
	{ 0x3f9e649b, "snd_dmaengine_pcm_trigger" },
	{ 0xc975eb0, "dma_common_mmap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1fec7798, "platform_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";


MODULE_INFO(srcversion, "8AFA06CB76239B9061592A0");
