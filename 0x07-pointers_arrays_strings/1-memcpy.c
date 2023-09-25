#include "main.h"
/**
 * _memcpy - a function that copies memory area
 *@dest: where the copied data will be stored.
 *@src: where the data is to be copied.
 *@n: The number of bytes to be copied.
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{ 
	unsigned int i;
	
	for (int i = 0; i < n; i++)
	{
		dest[i] = src[i];	
	} 
    return (dest);
} 
