#include "main.h"
/**
 * main - Entry point
 * Description: 'C program that prints the alphabet in lowercase,and upper'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
