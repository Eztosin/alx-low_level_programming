#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _calloc- Allocates a emory for an array using malloc.
* @nmemb: array of elements.
* @size: size of elements in bytes
* Return: NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ch;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ch = malloc(size * nmemb);
if (ch == NULL)
{
return (NULL);
}
if (ch != NULL)
{
memset(ch, 0, size * nmemb);
}
return (ch);
}
