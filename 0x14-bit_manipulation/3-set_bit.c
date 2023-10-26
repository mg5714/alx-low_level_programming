#include "main.h"

/**
 * set_bit - that sets the value of a bit to 1 at a given index.
 * @n:num of idx
 * @index: ind to be set
 * Return: 1 if it worked, or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);
*n |= 1UL << index;
return (1);
}
