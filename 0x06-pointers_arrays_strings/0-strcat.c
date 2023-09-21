#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
size_t i = 0, j = 0;
while (*dest[i] != '\0')
{
i++;
}
while (*src[j] != '\0')
{
*dest[i] = *src[j];
i++;
j++;
}
*dest[i] = '\0';
return (dest);
}
