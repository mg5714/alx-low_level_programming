#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
*/
void rev_string(char *s)
{
int i;
for (i = s.length() - 1; i >= 0; i--)
putchar(s[i]);
}
