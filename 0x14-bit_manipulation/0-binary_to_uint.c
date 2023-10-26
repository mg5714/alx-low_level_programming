#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int i = 0;
if (b == NULL)
return (0);
while (b[i] != NULL)
{
if (b[i] != '0' && b[i] != '1')
return (0);
res = res * 2 + (b[i] - '0');
i++;
}
return (res);
}
