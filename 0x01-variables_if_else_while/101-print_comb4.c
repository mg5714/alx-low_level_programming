#include <stdio.h>
/**#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits.
 * Return: Always 0.
 */
int main(void)
{
int i, x, j;
for (i = 48; i < 58; i++)
{
for (x = 49; x <= 58; x++)
{
for (j = 50; j < 58; j++)
{
if (j > x && x > i)
{
putchar(i);
putchar(x);
putchar(j);
if (i != 55 || x != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
