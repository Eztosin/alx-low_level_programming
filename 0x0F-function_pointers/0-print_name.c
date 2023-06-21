#include "function_pointers.h"
#include <unistd.h>

/**
* print_name- Function that prints a name.
* @name: char name to be printed.
* @f: function pointer.
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
write(1, "\n", 0);
}
