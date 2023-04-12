#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid -  frees a 2 dimensional grid
* @grid: 2 dimensional grid
* @height: dimensions (grid)
* Return: 0
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
