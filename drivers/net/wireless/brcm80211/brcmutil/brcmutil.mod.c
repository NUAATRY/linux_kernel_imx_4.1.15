#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfa985410, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7c2f0942, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xdc0bfa5d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x145ebdd9, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0x4962989f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x5da77f3, __VMLINUX_SYMBOL_STR(skb_dequeue_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb3d80a91, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xd4734e32, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x92763995, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AE9B4BBC6D82855B9265054");
