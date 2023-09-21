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
int i;
for (i=0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
