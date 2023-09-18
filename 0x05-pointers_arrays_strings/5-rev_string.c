#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
*/
void rev_string(char *s)
{
int i;
int len = *s.length();
 int n = len;
 for (i = (n - 1); i >= 0; i--)
putchar(s[i]);
}
