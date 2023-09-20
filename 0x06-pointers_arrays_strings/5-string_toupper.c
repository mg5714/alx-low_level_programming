#include "holberton.h"
/**
* string_toupper - change lowercase letters to uppercase.
* @s: analized string.
*
* Return: String with all letters Uppercased.
*/
char *string_toupper(char *)
{
int j = 0;
char str[];
char ch;
while (str[j]) {
ch = str[j];
putchar(toupper(ch));
j++;
}
return (0);
}
