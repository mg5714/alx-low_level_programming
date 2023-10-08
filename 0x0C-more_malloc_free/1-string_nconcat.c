
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
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
unsigned int s1_length = strlen(s1);
unsigned int s2_length = strlen(s2);
char *concatenated_string = (char *)malloc((s1_length + n + 1) * sizeof(char));
if (concatenated_string == NULL)
return (NULL);
strcpy(concatenated_string, s1);
strncat(concatenated_string, s2, n);
concatenated_string[s1_length + n] = '\0';
return (concatenated_string);
}
