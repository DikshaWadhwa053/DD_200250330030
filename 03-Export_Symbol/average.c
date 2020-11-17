#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
//#include "Header.h"




MODULE_LICENSE("GPL");

static int add(int a,int b);
//EXPORT-SYMTAB;
//make the variables mentioned below available to other modules for use...
static int a_exp=4,b_exp=88;


static int __init average_init(void)
{
    int Avg;
    printk(KERN_ALERT "INSIDE THE INIT MODULE.....the module parameters are %d %d\n",a_exp,b_exp);
    Avg=add(a_exp,b_exp);
    printk(KERN_ALERT "THE CALCULATED AVERAGE IS : %d\n",Avg);
    return 0;
}

static void __exit average_exit(void)
{

    printk(KERN_ALERT "NOW inside the cleanup module\n");
    printk(KERN_ALERT "execution done average is calculated\n");

}

module_init(average_init);
module_exit(average_exit);

module_param(a_exp,int,S_IRUGO);
module_param(b_exp,int,S_IRUGO);
