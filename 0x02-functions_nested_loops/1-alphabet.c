#include "main.h"
/**
 * main - Entry point
 * Description: 'C program that prints the alphabet in lowercase,and upper'
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
return (0);
}
