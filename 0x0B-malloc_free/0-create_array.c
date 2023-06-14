#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array- A function that creates an array of chars and
* initializes it with a specific char.
* @size: size of memory.
* @c: specific character to check.
* Return: NULL if size is zero or if it fails
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr = malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
