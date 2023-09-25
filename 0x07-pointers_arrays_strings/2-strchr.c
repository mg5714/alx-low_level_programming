#include "holberton.h"
/**
 * _strchr - function that locates a character in a string
 *@s: specifies the pointer to be performed.
*@c: specifies the character to be searched.
*
* Return: char with result
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
