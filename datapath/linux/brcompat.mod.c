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
	{ 0x25ec1b28, "strlen" },
	{ 0x459a7fca, "genl_unregister_family" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x84a24445, "skb_clone" },
	{ 0x4b0dcbe, "ovs_dp_ioctl_hook" },
	{ 0x59f300eb, "mutex_unlock" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xd46c9eaf, "nlmsg_notify" },
	{ 0xde0bdcff, "memset" },
	{ 0xb86e4ab9, "random32" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0x2becda32, "nla_put" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x868e2bb, "mutex_lock" },
	{ 0x5ce2e8d7, "netlink_unicast" },
	{ 0xffeda80d, "genl_register_family_with_ops" },
	{ 0x112223b9, "__dev_get_by_index" },
	{ 0xc6cbbc89, "capable" },
	{ 0x77782dca, "__alloc_skb" },
	{ 0x433d6e72, "netlink_broadcast" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0x39e2795, "kfree_skb" },
	{ 0xe0127c53, "brioctl_set" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xa758e10b, "genl_register_mc_group" },
	{ 0x4b06d2e7, "complete" },
	{ 0x5caf4af1, "skb_put" },
	{ 0x53f6ffbc, "wait_for_completion_timeout" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch";


MODULE_INFO(srcversion, "B0C93D48E0A4606D68CFC7F");
