#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - prints a name using a function pointer to apply formatting
* @name: pointer to the name string
* @f: pointer to the function to apply formatting to the name
*
* Description: This function takes a name string and a function pointer as
* arguments. It uses the function pointer to apply formatting to the name
* before printing it to the standard output.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
