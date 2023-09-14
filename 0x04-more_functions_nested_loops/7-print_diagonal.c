#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
putchar(' ');
putchar('\\');
if (i == (n - 1))
continue;
putchar('\n');
}
}
putchar('\n');
}
