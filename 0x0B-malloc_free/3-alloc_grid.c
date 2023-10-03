#include "main.h"
#include <stdlib.h>
/**
* str_concat -  a function that returns a pointer to a 2 dimensional array of integers.
*@width: int
*@height: int
* Return: pointer to 2 dim, NULL on failure.
*/
int **alloc_grid(int width, int height)
{
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
int **grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
