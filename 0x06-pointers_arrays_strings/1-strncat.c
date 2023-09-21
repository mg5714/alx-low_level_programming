#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: string where we want to append.
 * @src: string going to append.
 * @n: size of characters to be appended
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest + strlen(dest);
while (*src != '\0' && n--)
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
