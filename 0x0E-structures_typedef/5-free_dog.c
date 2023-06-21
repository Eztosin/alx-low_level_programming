#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - Function that frees the malloc for dog.
* @d: struct tagname.
* Return: Nothing.
*/


void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
free(d->name);
free(d->owner);
free(d);
}
