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
unsigned int count = 0;
while (*s != '\0') {
if (_strchr(accept, *s) == NULL)
{
return (count);
}
count++;
s++;
}
return (count);
}
