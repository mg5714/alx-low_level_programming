#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @min: First string
 * @max: String
 *
 * Return: the pointer , if it fails return NULL
 */
int *array_range(int min, int max)
{
int size, *arr, i;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}
