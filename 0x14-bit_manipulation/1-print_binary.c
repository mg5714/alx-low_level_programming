#include "main.h"

/**
 * print_binary - that prints the binary representation of a number.
 * @n: num for print
 * Return: void
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n / 2);
_putchar((n & 1) + '0');
}
