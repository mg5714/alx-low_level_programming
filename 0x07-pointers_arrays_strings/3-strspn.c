#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *@s: string or char
*@accept: bytes
*
* Return: the number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, count;
for (count = 0; *s != '\0'; count++)
{
for (i = 0; *accept != *s; i++)
{
if (*accept == '\0')
return (count);
}
}
return (count);
}
