#include <stdio.h>

/**
 * main -  program that prints all possible different
 *              combinations of three digits.
 * Return: Always 0.
 */
int main(void)
{
int i, x;

for (i = 0; i < 9; i++)
{
for (x = i + 1; x < 10; x++)
{
putchar((i % 10) + '0');
putchar((x % 10) + '0');

if (i == 8 && x == 9)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
