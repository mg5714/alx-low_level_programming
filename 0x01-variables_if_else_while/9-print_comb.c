#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints all possible combinations
*                           of single-digit numbers'
* only use the putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
putchar('0' + i);
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
