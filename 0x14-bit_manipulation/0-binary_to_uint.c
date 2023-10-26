#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
res = res * 2 + (*b++ - '0');
}
return (res);
}
