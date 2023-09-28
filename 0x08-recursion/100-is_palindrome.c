#include "main.h"
#include <string.h>
/**
 * is_palindrome - a function that check a string is a palindrome
 * is_palin - a fun to len
 *@s: string
*@x: str
*@e: num
* Return: 1 if a string is a palindrome and 0 if not.
*/
int isPalRec(char s[], int x, int e)
{
if (x == e)
return (1);
if (s[x] != s[e])
return (0);
if (x < e + 1)
return (isPalRec(s, x + 1, e - 1));
return (1);
}
int is_palindrome(char *s)
{
int n = strlen(s);
if (n == 0)
return (1);
return (isPalRec(s, 0, n - 1));
}
