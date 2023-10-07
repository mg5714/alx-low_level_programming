#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory by use malloc
 * @nmemb: num of blocks
 * @size: size of each block
 * Return: the pointer , if it fails return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;
return (ptr);
}   
}
