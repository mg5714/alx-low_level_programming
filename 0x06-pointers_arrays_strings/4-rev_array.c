#include "main.h"
/**
* reverse_array - everses of an array.
* @a: array to be rev.
* @n: number of elements of the array
* Return: nothing
*/
void reverse_array(int *a, int n)
{
 int temp, start = 0, end = n - 1;

 while (start < end)
 {
  temp = a[start];
  a[start] = a[end];
  a[end] = temp;
  start++;
  end--;
 }
}
