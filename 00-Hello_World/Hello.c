//**********Include Section*******//
#include<linux/init.h>
//header for Initialization and Cleanup
#include<linux/module.h>  
//contains necessary stuff for module

MODULE_LICENSE("GPL");//macro which decides licensing of the module

//Initialization function for the program........

static int __init helloworld_init(void)
{
    printk(KERN_ALERT "Inside the init module\n");
    printk(KERN_ALERT"Helloooooooooo\n");
    return 0; //it is of great significance
}

static void __exit helloworld_exit(void)
{
    printk(KERN_ALERT "Inside the cleanup module\n");
    printk(KERN_ALERT"bieeeee to all\n");
}

module_init(helloworld_init);//for the abovesid initialization fxn
module_exit(helloworld_exit);//for cleanup fxn
