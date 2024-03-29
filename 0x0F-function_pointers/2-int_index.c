#include "function_pointers.h"
#include <stddef.h>

/**
* int_index - searches for an integer in an array.
* @array: pointer to the array.
* @size: number of elements in the array.
* @cmp: pointer to the comparison function.
*
* Return: index of the first element for which the cmp function
* does not return 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
