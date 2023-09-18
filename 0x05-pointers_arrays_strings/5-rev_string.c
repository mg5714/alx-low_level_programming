#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
*/
void rev_string(char *s)
{
int i;
int len = s.length();
for (i = len - 1; i >= 0; i--)
putchar(s[i]);
}
