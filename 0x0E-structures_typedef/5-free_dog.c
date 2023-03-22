#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* free_dog - Frees memory allocated for a dog_t struct
* @d: Pointer to dog_t struct to free
*
* Return: void
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
