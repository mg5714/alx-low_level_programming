#include "main.h"
/**
* reverse_array - everses of an array.
* @a: array to be rev.
* @n: number of elements of the array
* Return: reversed array.
*/
void reverse_array(int *a, int n)
{
int i, j, temp;
for (i = 0; i < n; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
