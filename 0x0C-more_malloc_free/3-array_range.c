#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - A function that creates an array of integers.
* @min: Minimum value the array should contain.
* @max: Maximum value the array contains.
* Return: NULL if malloc fails.
*/
int *array_range(int min, int max)
{
int i, j, *ptr;
if (min > max)
{
return (NULL);
}
i = max - min + 1;
ptr = malloc(i * sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
ptr[j] = min++;
}
return (ptr);
}
