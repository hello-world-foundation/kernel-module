#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
  
MODULE_LICENSE("GPL"); 
MODULE_AUTHOR("Your Name"); 
  
MODULE_DESCRIPTION("Example Module");
MODULE_VERSION("0.1");
  
static int __init test_start(void) { 
    printk(KERN_INFO "Hello world\n"); 
    return 0; 
} 
  
static void __exit test_end(void) {
    printk(KERN_INFO "Goodbye\n"); 
} 
  
module_init(test_start); 
module_exit(test_end); 
