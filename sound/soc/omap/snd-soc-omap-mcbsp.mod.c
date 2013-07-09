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
	{ 0x4cc9e353, "__pm_runtime_idle" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x1559601b, "_raw_spin_unlock" },
	{ 0x54564615, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x788fe103, "iomem_resource" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x3f90fbcd, "snd_pcm_hw_constraint_step" },
	{ 0xe82e8454, "devm_kzalloc" },
	{ 0xd76eb8f, "of_property_read_u32_array" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x20e20f94, "__pm_runtime_resume" },
	{ 0x91715312, "sprintf" },
	{ 0xec06ec83, "sysfs_remove_group" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xbea1da3f, "snd_soc_unregister_dai" },
	{ 0x1b0d3798, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x16e724ee, "sysfs_create_group" },
	{ 0x6b51a1fd, "_raw_spin_unlock_irq" },
	{ 0x9c9de9fa, "platform_get_resource" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6ff41902, "platform_driver_register" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x1711497e, "of_match_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf6d1aeef, "snd_soc_info_volsw" },
	{ 0x2f1167ea, "snd_pcm_hw_rule_add" },
	{ 0xe27c7a6, "pm_runtime_enable" },
	{ 0x59c28e5, "platform_get_irq_byname" },
	{ 0x7fd790ad, "clk_set_parent" },
	{ 0x14705d05, "_raw_spin_lock_irq" },
	{ 0xdbc55dc3, "__devm_request_region" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x1e06d7c2, "__raw_spin_lock_init" },
	{ 0x80b8b59, "_raw_spin_lock" },
	{ 0x64b5450, "clk_get" },
	{ 0xcdfbae45, "platform_get_resource_byname" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x9724a410, "snd_soc_register_dai" },
	{ 0xb2ba37a0, "devm_ioremap" },
	{ 0x900b36e, "dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x33493eb7, "platform_get_irq" },
	{ 0x1fec7798, "platform_driver_unregister" },
	{ 0xf37fdb7c, "snd_soc_add_dai_controls" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,omap2420-mcbsp*");
MODULE_ALIAS("of:N*T*Cti,omap2430-mcbsp*");
MODULE_ALIAS("of:N*T*Cti,omap3-mcbsp*");
MODULE_ALIAS("of:N*T*Cti,omap4-mcbsp*");

MODULE_INFO(srcversion, "5E807339B995F52A997EC41");
