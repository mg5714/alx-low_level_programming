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
int i, j;
for (i = 0; dest[i]; i++);
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
