#include "main.h"
/**
 * create_array - create array of char.
 *@size: size of the array
 *@c: char
 * Return: a pointer to the array, or NULL.
 */
char *create_array(unsigned int size, char c)
{
    int i;
    char *arr = malloc(size * sizeof(char));
    if (size == 0 || arr == NULL)
    {
        return (NULL);
    }
  
    for (i = 0; i < size; i++)
    {
        arr[i] = c;
    }
    
    return (arr);
}
