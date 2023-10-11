#include "function_pointers.h"
/**
 * print_name - a function that executes a function given as a 
 * parameter on each element of an array.
 * @array: array
 * @size: size of arrey
 * @action: action well take
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
for (i = 0; i < size; i++)
action(array[i]);
}
