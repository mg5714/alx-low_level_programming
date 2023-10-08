#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String 
 * @n: Amount int
 *
 * Return: the pointer , if it fails return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
result = malloc(len1 + n + 1);
if (result == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
result[i] = s1[i];
for (j = 0; j < n; j++)
result[i] = s2[j];
i++;
result[i] = '\0';
return (result);
}
