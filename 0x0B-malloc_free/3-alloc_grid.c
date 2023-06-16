#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid- A function that returns a pointer to a 2 dimensional
* array.
* @width: width of the grid.
* @height: height of the grid.
* Return: NULL on failure.
*/
int **alloc_grid(int width, int height)
{
int **ptr, j, k;
if (width <= 0 || height <= 0)
{
return (NULL);
}
ptr = malloc(height * sizeof(int *));
if (ptr == NULL)
{
return (NULL);
}
for (j = 0; j < height; j++)
{
ptr[j] = malloc(width * sizeof(int));
if (ptr[j] == NULL)
{
for (k = j; k >= 0; k--)
{
free(ptr[k]);
}
free(ptr);
}
}
return (ptr);
}
