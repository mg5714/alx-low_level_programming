#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n:num of idx
 * @index: ind to be cleard
 * Return: 1 if it worked, or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);
*n &= ~(1UL << index);
return (1);
}
