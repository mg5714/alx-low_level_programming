#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @str: analized string.
 *
 * Return: Str.
 */
char *cap_string(char *str)
{
int i = 0;
while(str[i] != '\0')
{
if(i == 0 || str[i-1] == ' ' || str[i-1] == '\t' || str[i-1] == '\n' || str[i-1] == ',' || str[i-1] == ';' || str[i-1] == '.' ||
 str[i-1] == '!' || str[i-1] == '?' || str[i-1] == '"' || str[i-1] == '(' || str[i-1] == ')' || str[i-1] == '{' || str[i-1] == '}')
{
if(str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
else
{

}
}
i++;
}
return (str);
}
