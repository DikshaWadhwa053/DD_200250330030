#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>//it allows the passing of parameters to the module


MODULE_LICENSE("GPL");


static int add(int a,int b);
//Initialization function

static int __init add_init(void)
{
    printk(KERN_ALERT "inside the init module\n");
    return 0;
}

int add(int a,int b)
{
    printk(KERN_ALERT "we are now inside the add module created\n");
    return(a+b);
}
//macro
EXPORT_SYMBOL_GPL(add);

static void __exit add_exit(void)
{
    printk(KERN_ALERT "inside the cleanup module\n");
}

module_init(add_init);
module_exit(add_exit);

