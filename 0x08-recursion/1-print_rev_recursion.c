#include "main.h"
#include <unistd.h>
/**
*_print_rev_recursion- Prints a string in reverse.
* @s: The string to be printed.
* Return: Always 0.
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
write(1, s, 1);
}
