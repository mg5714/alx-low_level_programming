#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
{
putchar(s[i]);
}
putchar('\n');
}
