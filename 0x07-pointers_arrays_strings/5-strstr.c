#include "holberton.h"
/**
 * _strstr - function that locates a substring.
 *@haystack: first
*@needle:  char
*
* Return: 0 alwayes
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *p = haystack;
char *p2 = needle;
while (*p == *p2 && *p2 != '\0')
{
p++;
p2++;
}
if (*p2 == '\0')
return (haystack);
}
return (NULL);
}
