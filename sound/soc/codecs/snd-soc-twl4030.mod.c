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
	{ 0xf9a482f9, "msleep" },
	{ 0xc471c67a, "twl4030_audio_disable_resource" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdd4fe5c3, "snd_soc_dapm_get_enum_double" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x3acdf325, "twl4030_audio_enable_resource" },
	{ 0xe82e8454, "devm_kzalloc" },
	{ 0xbaa70f2a, "snd_soc_dapm_get_volsw" },
	{ 0xd76eb8f, "of_property_read_u32_array" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xc0823e4c, "twl_i2c_write" },
	{ 0x1920d768, "snd_soc_put_volsw" },
	{ 0x48b5f8d, "twl4030_audio_get_mclk" },
	{ 0xa6280963, "snd_soc_get_volsw" },
	{ 0x3a63c445, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x34853419, "snd_soc_read" },
	{ 0x7905d203, "snd_soc_info_enum_ext" },
	{ 0x1b0d3798, "dev_err" },
	{ 0x192d2b2a, "snd_soc_update_bits" },
	{ 0xe17477ed, "snd_soc_dapm_put_volsw" },
	{ 0x6ff41902, "platform_driver_register" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf6d1aeef, "snd_soc_info_volsw" },
	{ 0x87e45208, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7c98845d, "twl_i2c_read" },
	{ 0x3757c9b, "of_get_named_gpio_flags" },
	{ 0xec49ff72, "snd_soc_unregister_codec" },
	{ 0xfe990052, "gpio_free" },
	{ 0xe4a7cb87, "of_find_node_by_name" },
	{ 0xd050f231, "snd_soc_put_enum_double" },
	{ 0x7201ba7f, "snd_pcm_hw_constraint_minmax" },
	{ 0x900b36e, "dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1fec7798, "platform_driver_unregister" },
	{ 0x92677d32, "snd_soc_register_codec" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0x4c08b7e7, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";


MODULE_INFO(srcversion, "A91D10AA5A8B5597175433D");
