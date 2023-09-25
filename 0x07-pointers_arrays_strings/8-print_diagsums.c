#include "main.h"
#include <stdio.h>
/**
* print_diagsums - a function that prints the sum of the two
* diagonals of a square matrix of integers.
*@a: diagonals arrays of int
*@size: size of arry
* Return: 0
*/
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i;
for (i = 0; i < size; i++)
{
sum1 += a[i];
for (y = size - 1; y >= 0 ; y--)
{
sum2 += a[size - i - 1];
}
}
printf("%d, %d\n", sum1, sum2);
}
