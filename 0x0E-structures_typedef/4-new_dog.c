#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* new_dog - a function that creates a new dog, which holds the copy
* of the initial.
* @name: new dog name.
* @age: new dog age.
* @owner: the owner.
* Return: NULL if it fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *create_dog;
create_dog = malloc(sizeof(struct dog));
if (create_dog == NULL)
{
return (NULL);
}
create_dog->name = strdup(name);
create_dog->owner = strdup(owner);
create_dog->age = age;
if (create_dog->name == NULL || create_dog->owner == NULL)
{
free(create_dog->name);
free(create_dog->owner);
free(create_dog);
return (NULL);
}
return (create_dog);
}
