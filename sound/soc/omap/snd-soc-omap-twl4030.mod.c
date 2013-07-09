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
	{ 0x555ec50e, "snd_soc_of_parse_card_name" },
	{ 0x1b227bd0, "of_parse_phandle" },
	{ 0xe82e8454, "devm_kzalloc" },
	{ 0x172eb180, "snd_soc_pm_ops" },
	{ 0xd363f96a, "snd_soc_jack_new" },
	{ 0x1b0d3798, "dev_err" },
	{ 0xe87e8a13, "of_find_property" },
	{ 0x45872ae1, "snd_soc_jack_add_pins" },
	{ 0xf3b9312c, "snd_soc_unregister_card" },
	{ 0x6ff41902, "platform_driver_register" },
	{ 0x3757c9b, "of_get_named_gpio_flags" },
	{ 0x96504f2e, "snd_soc_of_parse_audio_routing" },
	{ 0xb2b02872, "snd_soc_dapm_disable_pin" },
	{ 0x479417f0, "snd_soc_dai_set_fmt" },
	{ 0x120b297c, "snd_soc_jack_add_gpios" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6396a571, "snd_soc_jack_free_gpios" },
	{ 0x1fec7798, "platform_driver_unregister" },
	{ 0x58640fcd, "snd_soc_register_card" },
	{ 0xca3430a7, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,omap-twl4030*");

MODULE_INFO(srcversion, "51673453F03886CFE653B24");
