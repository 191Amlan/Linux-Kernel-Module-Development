#include<linux/kernel.h>
#include<linux/module.h>

int init_module(void){
	printk(KERN_INFO "Hello kernel is spiking\n");
	return 0;
}
