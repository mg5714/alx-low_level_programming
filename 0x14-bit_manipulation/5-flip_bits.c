#include "main.h"

/**
 * flip_bits - that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n:int num
 * @m: int num
 * Return:number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int XOR = n ^ m;
unsigned int num = 0;
while (XOR > 0)
{
num += XOR & 1;
XOR >>= 1;
}
return (num);
}
