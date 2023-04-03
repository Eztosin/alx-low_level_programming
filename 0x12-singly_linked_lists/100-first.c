#include <stdio.h>
/**
* before_main - this function uses the gcc attribute constructor which
* can be executed before main function is called and prints the message
* passed to printf function
*/
void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you must allow,\nI bore");
printf(" my house upon my back!\n");
}
