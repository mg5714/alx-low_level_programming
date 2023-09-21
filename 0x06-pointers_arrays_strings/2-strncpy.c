#include "main.h"
/**
* _strncpy - concatenate strings, defining the size of second string.
* @dest:  This is the pointer to the dest
* @src: This is the string to be copied
* @n: num to be copied from src.
* Return: dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
if (dest == NULL)
{
return (NULL);
}
char *ptr = dest;
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
