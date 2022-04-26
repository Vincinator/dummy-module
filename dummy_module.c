#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vincent Riesop");
MODULE_DESCRIPTION("Just a stupid dumy module");
MODULE_VERSION("0.1");

static int __init dummy_init(void) {
	printk(KERN_INFO "Dummy Module Loaded\n");
	return 0;
}
static void __exit dummy_exit(void) {
	 printk(KERN_INFO "Dummy Module unloaded\n");
}
module_init(dummy_init);
module_exit(dummy_exit);
