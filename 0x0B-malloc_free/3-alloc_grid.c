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
int **ptr, j;
ptr = malloc(height * sizeof(int *));
for (j = 0; j < width; j++)
ptr[j] = malloc(width * sizeof(int));
if (width <= 0 || height <= 0)
{
return (NULL);
}
if (ptr == NULL)
{
return (NULL);
}
if (ptr[j] == NULL)
{
free (ptr[j]);
}
if (ptr == NULL)
{
free (ptr);
}
return (ptr);
}
