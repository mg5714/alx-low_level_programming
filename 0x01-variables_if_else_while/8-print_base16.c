#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints all the numbers of base 16 in lowercase'
* only use the putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char x;
for (i = 0; i < 10 ; i++)
{
putchar('0' + i);
}
for (x = 'a' ; x <= 'f' ; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
