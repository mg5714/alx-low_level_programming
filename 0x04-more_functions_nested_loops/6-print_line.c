#include "main.h"
/**
*print_line - prints a straight line
*@n:parameter
*Return:returns nothing
*/
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
return;
}
for (int i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
