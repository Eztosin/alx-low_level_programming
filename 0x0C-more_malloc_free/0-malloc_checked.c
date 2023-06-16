#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* malloc_checked- A function that allocates memory using malloc.
* @b: Unsigned integer.
* Return: Pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
void *ch;
ch = malloc(b);
if (ch == NULL)
{
exit(98);
}
return (ch);
}
