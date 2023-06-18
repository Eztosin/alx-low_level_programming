#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _realloc- Function reallocates a memory block using malloc.
* @ptr: Pointer to previously allocated memory.
* @old_size: Size allocated for ptr.
* @new_size: Size of the new memory block.
* Return: NULL if it fails or pointer to new memory block.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ptr1;
unsigned int copy;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
ptr1 = malloc(new_size);
if (ptr1 == NULL)
{
return (NULL);
}
if (old_size < new_size)
{
copy = old_size;
}
else if (old_size >= new_size)
copy = new_size;
memcpy(ptr1, ptr, copy);
free(ptr);
return (ptr1);
}
