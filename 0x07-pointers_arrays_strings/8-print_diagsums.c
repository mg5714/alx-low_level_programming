#include "main.h"
#include <stdio.h>
/**
* print_diagsums - a function that prints the sum of the two
* diagonals of a square matrix of integers.
*@a: diagonals arrays of int
*@size: size of arry
*/
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i];
sum2 += a[size - i - 1];
a += size;
}
printf("Sum of diagonal 1: %d", sum1);
printf("Sum of diagonal 2: %d\n", sum2);
}
