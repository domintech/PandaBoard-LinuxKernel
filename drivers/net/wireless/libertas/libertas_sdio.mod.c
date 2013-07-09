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
	{ 0x4cad6d66, "sdio_writeb" },
	{ 0x7f4cc621, "sdio_readb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4cc9e353, "__pm_runtime_idle" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1bed81ee, "dev_set_drvdata" },
	{ 0x71b629b8, "__alloc_workqueue_key" },
	{ 0x8d354593, "lbs_resume" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0xb8d1f9a1, "sdio_writesb" },
	{ 0x9224bc3e, "sdio_enable_func" },
	{ 0x529dde05, "sdio_claim_irq" },
	{ 0x38bc49cf, "schedule_work" },
	{ 0x8957be2f, "cancel_work_sync" },
	{ 0xe37c0274, "queue_work" },
	{ 0xe2866681, "lbs_stop_card" },
	{ 0x20e20f94, "__pm_runtime_resume" },
	{ 0x30e39c5e, "netdev_alert" },
	{ 0xdb12e502, "__lbs_cmd" },
	{ 0x7d11c268, "jiffies" },
	{ 0x45fe27f3, "sdio_get_host_pm_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc799a677, "__netdev_alloc_skb" },
	{ 0xaf8e8fef, "__init_waitqueue_head" },
	{ 0xd6db3176, "lbs_start_card" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x1b0d3798, "dev_err" },
	{ 0x2f2d3cf, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xba1ad895, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69df89bb, "lbs_get_firmware_async" },
	{ 0x17fbbaeb, "lbs_cmd_copyback" },
	{ 0xe9f8eb50, "lbs_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf64277de, "lbs_debug" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb5f677b8, "sdio_readsb" },
	{ 0x9198513f, "sdio_unregister_driver" },
	{ 0x23ca23b4, "lbs_remove_card" },
	{ 0xb48907a1, "sdio_f0_writeb" },
	{ 0x30afc265, "sdio_set_host_pm_flags" },
	{ 0xf9f7496f, "lbs_process_rxed_packet" },
	{ 0x4a33461a, "_dev_info" },
	{ 0xf1035ce2, "sdio_release_irq" },
	{ 0xf9b3c44b, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xc87271e6, "sdio_align_size" },
	{ 0x1e06d7c2, "__raw_spin_lock_init" },
	{ 0xf1e7d737, "lbs_add_card" },
	{ 0x7e22481c, "sdio_f0_readb" },
	{ 0x69f8aa33, "mmc_add_host" },
	{ 0x82c1e38, "netdev_err" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x80883441, "_raw_spin_lock_irqsave" },
	{ 0x21659a1a, "__wake_up" },
	{ 0x11df9689, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa563be3c, "prepare_to_wait" },
	{ 0x89c0ed7c, "lockdep_init_map" },
	{ 0xadcb92c, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3e0d8c56, "sdio_register_driver" },
	{ 0xd30b3be0, "sdio_claim_host" },
	{ 0xef23d3a9, "skb_put" },
	{ 0xca3430a7, "dev_get_drvdata" },
	{ 0xd3c4cab0, "sdio_set_block_size" },
	{ 0x37dcf84a, "release_firmware" },
	{ 0x4ab0ce86, "sdio_disable_func" },
	{ 0x80c91538, "sdio_release_host" },
	{ 0x708fd377, "lbs_notify_command_response" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "0948741A0A0C2F22AA5807C");
