#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

static int __init Hello_2_init(void){
	printk(KERN_INFO "Hello world.\n");
	return 0;
}

static void __exit Hello_2_exit(void){
	printk(KERN_INFO "Good bye.\n");
}

module_init(Hello_2_init);
module_exit(Hello_2_exit);
