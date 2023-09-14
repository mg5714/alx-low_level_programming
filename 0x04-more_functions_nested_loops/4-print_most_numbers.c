#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4.
*Return: nothing
*/
void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i != 52 && i != 52)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
