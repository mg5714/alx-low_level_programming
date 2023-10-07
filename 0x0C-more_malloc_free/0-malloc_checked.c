#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - that allocates memory using malloc.
 * @b: string to count
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if (ptr == 0)
        exit(98);
    return (ptr);
}
