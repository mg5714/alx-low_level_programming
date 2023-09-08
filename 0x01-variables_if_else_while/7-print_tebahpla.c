#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints all single digit numbers of base 10'
* only use the putchar
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
