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
	{ 0xd5442fd2, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x53c4fe30, "rcu_lock_map" },
	{ 0x402b8281, "__request_module" },
	{ 0x7051a71e, "netdev_info" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3797c97a, "cfg80211_cqm_rssi_notify" },
	{ 0x3404a0c0, "perf_tp_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0xab6babaf, "pm_qos_request" },
	{ 0x8ad03b5e, "init_dummy_netdev" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x768878e0, "wiphy_free" },
	{ 0x155fe02e, "cfg80211_unlink_bss" },
	{ 0x1559601b, "_raw_spin_unlock" },
	{ 0x3ad12a05, "mutex_destroy" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x38bb6baa, "del_timer" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0xec92b6cf, "cfg80211_radar_event" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x71b629b8, "__alloc_workqueue_key" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0x9469482, "kfree_call_rcu" },
	{ 0x19e03378, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x5e7f6645, "dev_printk" },
	{ 0x3405c401, "napi_complete" },
	{ 0x8315589a, "malloc_sizes" },
	{ 0x66f8c974, "cfg80211_inform_bss_frame" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x48df5147, "cfg80211_report_wowlan_wakeup" },
	{ 0xe7048594, "cfg80211_chandef_create" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0x32e64294, "netif_carrier_on" },
	{ 0xac094ff8, "_raw_spin_lock_bh" },
	{ 0xf811a0f3, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xef105205, "skb_copy" },
	{ 0x38bc49cf, "schedule_work" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xb5686493, "netif_carrier_off" },
	{ 0x8957be2f, "cancel_work_sync" },
	{ 0xe37c0274, "queue_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x1abec1ac, "cfg80211_rx_mgmt" },
	{ 0xa1425906, "ieee80211_channel_to_frequency" },
	{ 0x159de811, "init_timer_key" },
	{ 0x9621849f, "ring_buffer_event_data" },
	{ 0x6f85075b, "cancel_delayed_work_sync" },
	{ 0x6f49c41f, "mutex_unlock" },
	{ 0xc63f1b81, "ieee80211_radiotap_iterator_next" },
	{ 0xf578fc59, "cfg80211_send_rx_assoc" },
	{ 0x996e5aaa, "ieee80211_data_to_8023" },
	{ 0x83c82d1e, "cfg80211_probe_status" },
	{ 0xcb5a7712, "cfg80211_del_sta" },
	{ 0x3eb85bd, "cfg80211_unregister_wdev" },
	{ 0x5261c317, "filter_current_check_discard" },
	{ 0x7fe1a403, "cfg80211_find_ie" },
	{ 0x349f176e, "idr_for_each" },
	{ 0x53ddd31e, "cfg80211_reg_can_beacon" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x13699f56, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x231cf241, "cfg80211_mgmt_tx_status" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0xc799a677, "__netdev_alloc_skb" },
	{ 0x81be13a3, "netif_rx" },
	{ 0x4a0e4bde, "lock_release" },
	{ 0x9cd33ccc, "__pskb_pull_tail" },
	{ 0x865029ac, "__hw_addr_sync" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xab70ad05, "del_timer_sync" },
	{ 0x4e562df1, "skb_queue_purge" },
	{ 0x31470905, "cfg80211_chandef_usable" },
	{ 0xb0544dee, "trace_define_field" },
	{ 0xfe096515, "lock_acquire" },
	{ 0x5f754e5a, "memset" },
	{ 0xcad66c86, "netif_rx_ni" },
	{ 0x3ba33c67, "cancel_delayed_work" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xbd9dab98, "__ieee80211_get_channel" },
	{ 0x838c99fc, "idr_destroy" },
	{ 0x2f2d3cf, "_raw_spin_unlock_irqrestore" },
	{ 0x5a418995, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xfeca080e, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xaf91d89f, "__kernel_param_lock" },
	{ 0x71c90087, "memcmp" },
	{ 0x982e6b6d, "ieee80211_radiotap_iterator_init" },
	{ 0x5da81139, "cfg80211_send_disassoc" },
	{ 0x96cbcf31, "pm_qos_add_notifier" },
	{ 0x15c04d20, "free_netdev" },
	{ 0xcfec9984, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc64a7858, "netif_receive_skb" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe433bf60, "skb_push" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd4ef20b0, "dev_close" },
	{ 0x7e56009, "cfg80211_send_rx_auth" },
	{ 0x463c9e97, "cfg80211_cqm_pktloss_notify" },
	{ 0xe7bea3a3, "cfg80211_michael_mic_failure" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xa5882aae, "mod_timer" },
	{ 0xf49bd9c3, "netif_napi_add" },
	{ 0x193ef101, "add_timer" },
	{ 0x19df797c, "cfg80211_report_obss_beacon" },
	{ 0xd8a9bc39, "idr_alloc" },
	{ 0xa15f23a, "skb_pull" },
	{ 0xfef8a166, "trace_current_buffer_lock_reserve" },
	{ 0x832c7303, "cfg80211_chandef_compatible" },
	{ 0x615440ed, "__cfg80211_send_disassoc" },
	{ 0xf36f2426, "cfg80211_ibss_joined" },
	{ 0x3786741c, "cfg80211_rx_spurious_frame" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd06a45f8, "dev_kfree_skb_any" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x49b8eb70, "idr_remove" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x92c0c538, "ieee80211_bss_get_ie" },
	{ 0x54c1cc3c, "ftrace_event_reg" },
	{ 0xf6d75545, "module_put" },
	{ 0xc90f7849, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xfc7de8aa, "skb_copy_expand" },
	{ 0x201f58a4, "cfg80211_gtk_rekey_notify" },
	{ 0x4a33461a, "_dev_info" },
	{ 0x7a27c184, "ewma_init" },
	{ 0xfd23f6a, "idr_find_slowpath" },
	{ 0x1269fe7d, "cfg80211_put_bss" },
	{ 0xe0fb6d48, "__alloc_skb" },
	{ 0xd8013996, "wiphy_new" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0x8a1e8088, "wiphy_register" },
	{ 0xa6bee27f, "__napi_schedule" },
	{ 0xe7f80cb4, "_raw_spin_unlock_bh" },
	{ 0x886d76ac, "cfg80211_send_unprot_disassoc" },
	{ 0x5d0aedb9, "cfg80211_classify8021d" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x88c0b703, "kfree_skb" },
	{ 0x21d930fb, "cfg80211_ready_on_channel" },
	{ 0x3f75b7f5, "flush_delayed_work" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x92ce894c, "alloc_netdev_mqs" },
	{ 0x1e06d7c2, "__raw_spin_lock_init" },
	{ 0xf71521ba, "atomic64_add_return" },
	{ 0x8d6382ae, "eth_type_trans" },
	{ 0x1ca42862, "crypto_destroy_tfm" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0xcf618a57, "cfg80211_calculate_bitrate" },
	{ 0xd11c0dc1, "__kernel_param_unlock" },
	{ 0xa379395, "pskb_expand_head" },
	{ 0xd5eead4e, "ether_setup" },
	{ 0xf72f706c, "kmem_cache_alloc_trace" },
	{ 0x80b8b59, "_raw_spin_lock" },
	{ 0x2225fcf2, "cfg80211_send_unprot_deauth" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x80883441, "_raw_spin_lock_irqsave" },
	{ 0x83616015, "unregister_netdevice_queue" },
	{ 0x4b6b61f3, "cfg80211_new_sta" },
	{ 0x3a5f1e17, "cfg80211_chandef_valid" },
	{ 0xce46e140, "ktime_get_ts" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x23a764fc, "mutex_lock_nested" },
	{ 0xb48ee10c, "__cfg80211_send_deauth" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x6d27ef64, "__bitmap_empty" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe653d85f, "trace_event_raw_init" },
	{ 0xa75312bc, "call_rcu_sched" },
	{ 0xf8b0c5aa, "___pskb_trim" },
	{ 0x8d0265ec, "dev_alloc_name" },
	{ 0xb7b61546, "crc32_be" },
	{ 0x4ef7f0f5, "cfg80211_ref_bss" },
	{ 0xd788742d, "perf_trace_buf_prepare" },
	{ 0x3e9110fa, "__hw_addr_unsync" },
	{ 0xee1b5d5, "cfg80211_send_deauth" },
	{ 0x3e1e4091, "ieee80211_amsdu_to_8023s" },
	{ 0x89c0ed7c, "lockdep_init_map" },
	{ 0xcc451572, "skb_dequeue" },
	{ 0x900b36e, "dev_warn" },
	{ 0x4f3e8794, "cfg80211_cac_event" },
	{ 0xf6e04730, "event_storage" },
	{ 0x93f300c7, "cfg80211_remain_on_channel_expired" },
	{ 0xae0c87ee, "pm_qos_remove_notifier" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6208003, "cfg80211_send_auth_timeout" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x80e2651f, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1e3a88fb, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0x2e42dd32, "consume_skb" },
	{ 0x368e3fc7, "cfg80211_sched_scan_stopped" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x3dcb2757, "cfg80211_scan_done" },
	{ 0x609de7df, "idr_init" },
	{ 0x8ff6e7a2, "dev_queue_xmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xef23d3a9, "skb_put" },
	{ 0x5dff63ee, "eth_mac_addr" },
	{ 0xc892b14a, "crypto_alloc_base" },
	{ 0xac8f37b2, "outer_cache" },
	{ 0xdb284772, "skb_copy_bits" },
	{ 0x3bc49c46, "event_storage_mutex" },
	{ 0x1d7a2f81, "queue_delayed_work" },
	{ 0xf7decac9, "lock_is_held" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x498d293a, "trace_buffer_unlock_commit" },
	{ 0x6ca1d1a4, "atomic64_read" },
	{ 0x56d7324a, "try_module_get" },
	{ 0x18ccaf60, "cfg80211_rx_unexpected_4addr_frame" },
	{ 0xf389fe60, "__hw_addr_init" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa1f6e2e9, "skb_complete_wifi_ack" },
	{ 0x69649be, "cfg80211_sched_scan_results" },
	{ 0x35683519, "cfg80211_send_assoc_timeout" },
	{ 0xa14f3d8c, "ewma_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "6790260E11C3AF6DF9FB29F");
