#include "main.h"
/**
* reverse_array - everses of an array.
* @a: array to be rev.
* @n: number of elements of the array
* Return: reversed array.
*/
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n; i++)
{
temp = a[i];
a[i] = a[n-i-1];
a[n-i-1] = temp;
}
}
