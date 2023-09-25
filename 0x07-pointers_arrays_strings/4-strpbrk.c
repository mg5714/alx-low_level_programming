#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 *@s: string
*@accept: string
*
* Return: Returns a pointer to the byte
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
if (_strchr(accept, *s) != NULL)
{
return (s);
}
s++;
}
return (NULL);
}
