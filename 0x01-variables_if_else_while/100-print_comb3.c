#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits.
 * Return: Always 0.
 */
int main(void)
{
int i, x;
for (i = 0; i < 10; i++)
{
for (x = 0; x < 10; x++)
{
putchar(i + '0');
putchar(x + '0');
if (i == 9 && x == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
