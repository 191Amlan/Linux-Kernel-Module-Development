#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
#define DRIVER_AUTHOR "Indus Corporation <indus@.org>"
#define DRIVER_DESC "Simple module"

static int __init init_hello_4(void){
	printk(KERN_INFO "Hello kernel!.\n");
	return 0;
}

static void __exit exit_hello_4(void){
	printk(KERN_INFO "Bye kernel!.\n");
}

module_init(init_hello_4);
module_exit(exit_hello_4);

MODULE_LICENSE("GPL");

MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

MODULE_SUPPORTED_DEVICE("testdevice");
