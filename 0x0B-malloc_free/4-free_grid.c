#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid- A funcion that frees the alloc_grid 2-dimensional array.
* @grid: the address of the teo dimensional grid.
* @height: height of the grid
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
