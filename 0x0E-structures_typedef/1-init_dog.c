#include <stdio.h>
#include "dog.h"
/**
* init_dog- A function that initializes a variable of type struct
* @d: Tagname.
* @name: Character variable.
* @age: Float variable.
* @owner: Character variable
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
