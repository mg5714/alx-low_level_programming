#include "main.h"
/**
* print_number - Prints a number
* @n: The number to print
*/
void print_number(int n)
{
unsigned int num;
if (n < 0)
{
num = -n;
putchar('-');
}
else
{
num = n;
}
if (num / 10)
{
print_number(num / 10);
}
putchar((num % 10) + '0');
}
