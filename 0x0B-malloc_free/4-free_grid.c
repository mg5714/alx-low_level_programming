#include "main.h"
/**
* free_grid -  a function frees a 2 dimensional grid previously created.
*@grid: grid
*@height: int
* Return: gird
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
