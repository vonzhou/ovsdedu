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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf6628fc9, "module_layout" },
	{ 0x919a8eca, "register_netdevice" },
	{ 0x619e82bd, "kobject_put" },
	{ 0xf0ea9b7d, "kmem_cache_destroy" },
	{ 0x53822150, "kmalloc_caches" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x7d0ef9ad, "skb_gso_segment" },
	{ 0xb3e49fe1, "register_pernet_device" },
	{ 0x24ee029f, "inet_frag_kill" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0xc996d097, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0x5fdec4e1, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x459a7fca, "genl_unregister_family" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xed19beb8, "ip_local_out" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x34dee53d, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfcdc7d70, "skb_copy_and_csum_dev" },
	{ 0xc01cf848, "_raw_read_lock" },
	{ 0xab47a14b, "kobject_uevent" },
	{ 0xb37a34d, "dst_release" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x84a24445, "skb_clone" },
	{ 0xd74ee220, "dev_get_by_name" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x2124474, "ip_send_check" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xfd60e91a, "rtnl_notify" },
	{ 0x8b7fe311, "kmemdup" },
	{ 0x55f2580b, "__alloc_percpu" },
	{ 0xfbb7a748, "inet_proto_csum_replace4" },
	{ 0xf17de92d, "sock_create_kern" },
	{ 0x2309f848, "kobject_del" },
	{ 0xe7073b36, "inet_del_protocol" },
	{ 0x47c7b0d2, "cpu_number" },
	{ 0x91715312, "sprintf" },
	{ 0x3726b7, "__put_net" },
	{ 0x761903f6, "sysfs_remove_group" },
	{ 0x95272a9e, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe040d3d0, "inetdev_by_index" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x467979d9, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xff014ad, "inet_frag_find" },
	{ 0x27c33efe, "csum_ipv6_magic" },
	{ 0x5c6048e6, "netif_rx" },
	{ 0xe676ea2e, "__pskb_pull_tail" },
	{ 0x6395be94, "__init_waitqueue_head" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6d0aba34, "wait_for_completion" },
	{ 0xd46c9eaf, "nlmsg_notify" },
	{ 0xde0bdcff, "memset" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x30c0f431, "skb_checksum" },
	{ 0xfd934864, "dev_set_mac_address" },
	{ 0x91ff2d9f, "dev_alloc_skb" },
	{ 0xf6388c56, "sysctl_ip_default_ttl" },
	{ 0xb86e4ab9, "random32" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0xf5d0b8cb, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x27e1a049, "printk" },
	{ 0xaa73d7e2, "ethtool_op_get_link" },
	{ 0x251016b9, "kthread_stop" },
	{ 0x98ba3468, "sysfs_create_group" },
	{ 0x2fa5a500, "memcmp" },
	{ 0xf37c698a, "unregister_pernet_device" },
	{ 0x8e0b7743, "ipv6_ext_hdr" },
	{ 0x102b1eac, "__skb_warn_lro_forwarding" },
	{ 0xdd0b6a21, "free_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x2becda32, "nla_put" },
	{ 0x454f5bf5, "inet_frags_fini" },
	{ 0xc31a0a76, "inet_frags_exit_net" },
	{ 0xf161980c, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xac9ad832, "skb_push" },
	{ 0x7f658e80, "_raw_write_lock" },
	{ 0x9194b30b, "dev_get_by_index_rcu" },
	{ 0xa14cf579, "inet_add_protocol" },
	{ 0x5ce2e8d7, "netlink_unicast" },
	{ 0xbe2c0274, "add_timer" },
	{ 0xffeda80d, "genl_register_family_with_ops" },
	{ 0xe0c45124, "sysfs_remove_link" },
	{ 0xbbaacecd, "kobject_add" },
	{ 0x217dda13, "flex_array_get" },
	{ 0xa0d3d560, "ksize" },
	{ 0xfd6293c2, "boot_tvec_bases" },
	{ 0x93a1e588, "sysfs_create_link" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x23f39aa6, "__secpath_destroy" },
	{ 0xa040cac1, "rtnl_set_sk_err" },
	{ 0x31874d9a, "kmem_cache_alloc" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0xc531a6b1, "__nla_reserve" },
	{ 0x77782dca, "__alloc_skb" },
	{ 0x24f1ecb6, "sk_release_kernel" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x433d6e72, "netlink_broadcast" },
	{ 0x382ccfb7, "inet_frag_evictor" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0xb9249d16, "cpu_possible_mask" },
	{ 0xa5102125, "netdev_rx_handler_unregister" },
	{ 0x52d8dc14, "skb_checksum_help" },
	{ 0x1000e51, "schedule" },
	{ 0x39e2795, "kfree_skb" },
	{ 0xf47ea442, "inet_frag_destroy" },
	{ 0x43261dca, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x5eca87f, "alloc_netdev_mqs" },
	{ 0xb7b73905, "ip_mc_inc_group" },
	{ 0x141a7b07, "eth_type_trans" },
	{ 0xacba1bb4, "sysfs_create_file" },
	{ 0x50053c53, "wake_up_process" },
	{ 0x5e85b764, "pskb_expand_head" },
	{ 0xa9484e97, "ether_setup" },
	{ 0x4a21112a, "kmem_cache_alloc_trace" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xd0efbd1f, "kmem_cache_create" },
	{ 0xbc998333, "unregister_netdevice_queue" },
	{ 0x20be38be, "ip_route_output_flow" },
	{ 0xefdd5a63, "ktime_get_ts" },
	{ 0xcf21d241, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x76fcceac, "netlink_set_err" },
	{ 0xe7722171, "flex_array_free" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x12f99022, "inet_frags_init_net" },
	{ 0x4849712b, "dev_set_promiscuity" },
	{ 0x826b7303, "skb_copy_and_csum_bits" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0x50f5e532, "call_rcu_sched" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0x1b386fbf, "kobject_init" },
	{ 0xd9053dcc, "kernel_bind" },
	{ 0xa758e10b, "genl_register_mc_group" },
	{ 0xd3dcab0b, "flex_array_alloc" },
	{ 0x7628f3c7, "this_cpu_off" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x7c83fab0, "nla_reserve" },
	{ 0x86afccae, "inet_frags_init" },
	{ 0x4b06d2e7, "complete" },
	{ 0xa3a5be95, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x2d82e646, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe56a4252, "dev_queue_xmit" },
	{ 0x5caf4af1, "skb_put" },
	{ 0x69390c2, "sock_wfree" },
	{ 0xdced575e, "ip_mc_dec_group" },
	{ 0xddf78a31, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x42b19df4, "__ip_select_ident" },
	{ 0x1ec4eb34, "flex_array_prealloc" },
	{ 0x617485f9, "__skb_checksum_complete" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "99106CAC0D04A98DEE8C6BD");
