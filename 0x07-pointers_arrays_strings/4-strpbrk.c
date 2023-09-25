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
for (i = 0; s[i] != '\0'; i++)
{
if (*accept != NULL)
{
return (i);
}
}
return (NULL);
}
