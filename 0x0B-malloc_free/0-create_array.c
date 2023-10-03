#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char.
 *@size: size of the array
 *@c: char
 * Return: a pointer to the array, or NULL.
 */
char *create_array(unsigned int size, char c)
{
    if (size == 0)
    {
        return (NULL);
    }
    
    char *arr = malloc(size * sizeof(char));
    
    if (arr == NULL)
    {
        return (NULL);
    }
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = c;
    }
    
    return (arr);
}
