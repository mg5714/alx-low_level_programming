#include "holberton.h"
/**
 * _strstr - function that locates a substring.
 *@haystack: first
*@needle:  char
*
* Return: 0 alwayes
*/
char *_strstr(char *haystack, char *needle)
{    if (!*needle)
{
return (haystack);
}
char *p1 = haystack;
while (*p1)
{
char *p1Begin = p1, *p2 = needle;
while (*p1 && *p2 && *p1 == *p2)
{
p1++;
p2++;
}
if (!*p2)
{
return (p1Begin);
}
p1 = p1Begin + 1;
}
return (NULL);
}
