#include "function_pointers.h"
/**
*int_index - a function that searches for an integer.
* @array: array
* @size: size of element of arrey
* @cmp: a pointer used to compare
* Return: index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
