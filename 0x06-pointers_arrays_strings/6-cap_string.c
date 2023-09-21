#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @str: analized string.
 *
 * Return: Str.
 */
char *cap_string(char *str)
{
char *token;
char separators[] = " \t\n,;.!?\"(){}";
token = strtok(str, separators);
while (token != NULL)
{
token[0] = toupper(token[0]);
token = strtok(NULL, separators);
}
return (str);
}
