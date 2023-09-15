#include "main.h"
/**
*print_triangle - function that prints a triangle
*@size:size parameter of triangle
*Return: nothing
*/
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for ((j = size - i); j > 0; j--)
putchar(' ');
for (j = 0; j < i; j++)
putchar('#');
if (i == size)
continue;
putchar('\n');
}
}
putchar('\n');
}
