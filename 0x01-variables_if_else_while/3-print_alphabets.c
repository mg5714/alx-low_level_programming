#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints the alphabet in lowercase,and upper'
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet, ALPHABET;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
for (ALPHABET = 'A'; ALPHABET <= 'Z' ; ALPHABET++)
{
putchar(ALPHABET);
}
putchar('\n');
return (0);
}
