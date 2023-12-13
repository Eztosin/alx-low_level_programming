#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array using
* Binary search
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
* Return: Index where the value is located, or -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
size_t left_num = 0, right_num = size - 1, mid_num;

if (array == NULL)
return (-1);

while (left_num <= right_num)
{
printf("Searching in array: ");
for (mid_num = left_num; mid_num < right_num; mid_num++)
printf("%d, ", array[mid_num]);
printf("%d\n", array[mid_num]);

mid_num = left_num + (right_num - left_num) / 2;

if (array[mid_num] == value)
return (mid_num);

if (array[mid_num] < value)
left_num = mid_num + 1;
else
right_num = mid_num - 1;
}

return (-1);
}
