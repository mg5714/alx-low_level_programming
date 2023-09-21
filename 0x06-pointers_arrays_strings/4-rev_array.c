#include "main.h"
/**
* reverse_array - everses of an array.
* @a: array to be rev.
* @n: number of elements of the array
* Return: nothing
*/
void reverse_array (int *a, int n)
{
int i, x, temp;
for (i = 0, x = (n - 1); i < x; i++, x--)
{
temp = a[i];
a[i] = a[x];
a[x] = temp;
}
}
