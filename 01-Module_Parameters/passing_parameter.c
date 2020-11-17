#include<linux/init.h>
#include<linux/module.h>

static char* charvar= "Diksha";
static int intvar= 78;
MODULE_LICENSE("GPL");

module_param(charvar,charp,S_IRUGO);
module_param(intvar,int,S_IRUGO);

static int __init parameter_init(void){

    printk(KERN_ALERT "Inside the init module\n");
    printk(KERN_ALERT "the value of character variable is: %s\n",charvar);
    printk(KERN_ALERT "The integer value is: %d\n",intvar);
    return 0;
}

static void __exit parameter_exit(void)
{
printk(KERN_ALERT "Out of the init module and into the cleanup module\n");

}

module_init(parameter_init);
module_exit(parameter_exit);