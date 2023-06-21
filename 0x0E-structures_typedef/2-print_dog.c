#include <stdio.h>
#include "dog.h"
/**
* print_dog- Print struct dog
* @d: Tagname
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("Name: (nil)");
}
else
{
printf("Name: %s\n", d->name);
}
if (d->age == 0.000000)
{
printf("Age: (nil)\n");
}
else
{
printf("Age: %.6f\n", d->age);
}
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
