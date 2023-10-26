#include "main.h"

/**
 * get_bit - that returns the value of a bit at a given index.
 * @n: num of idx
 * @index: index to get.
 * Return:the value of the bit at index index or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);
return ((n >> index) & 1);
}
