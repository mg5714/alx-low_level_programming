#include "main.h"
#include <stdlib.h>
/**
* str_concat -  a function that concatenates two strings.
*@s1: string
*@s2: string
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, i, j;
char *concat;
if (s1 == NULL)
{
s1 = "\0";
}
if (s2 == NULL)
{
s2 = "\0";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
concat = malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
concat[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
concat[len1 + j] = s2[j];
}
concat[len1 + len2] = '\0';
return (concat);
}
