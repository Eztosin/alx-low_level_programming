#include "main.h"
#include <stdlib.h>
/**
* array_range - Create an array of integers ranging from min to max.
*
* @min: The minimum integer value.
* @max: The maximum integer value.
*
* Return: If successful - Pointer to the newly created array.
*         If unsuccessful - NULL.
*/
int *array_range(int min, int max)
{
int *arr;
int size, i;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min++;
return (arr);
}
