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
while (*s >= '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return ('\0');
}
