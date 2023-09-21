#include "main.h"
/**
* string_toupper - change lowercase letters to uppercase.
* @str: analized string.
*
* Return: all letters Uppercased.
*/
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if(str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}
