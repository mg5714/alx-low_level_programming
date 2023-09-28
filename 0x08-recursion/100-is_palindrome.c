#include "main.h"
/**
 * is_palindrome - a function that check a string is a palindrome
 *@s: string
*@x: num
* Return: 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
if (len == 0)
return (1);
if (s[0] != s[len - 1])
return (0);
s[len - 1] = '\0';
return (is_palindrome(s + 1));
}
