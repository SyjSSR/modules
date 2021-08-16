#include <linux/module.h>

#include <linux/kernel.h>

#define USE_IMMEDIATE
//  初始化Linux驱动

static int word_count_init(void)
{
    //  输出日志信息
    printk("word_count_init_success\n");
    return 0;
}

// 退出Linux驱动
static void word_count_exit(void)
{
    //  输出日志信息
   printk("word_count_init_exit_success\n");
}
//  注册初始化Linux驱动的函数
module_init(word_count_init);
//  注册退出Linux驱动的函数
module_exit(word_count_exit);   
