#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: int
*@av: char
* Return: ptr.
*/
char *argstostr(int ac, char **av)
{
int total_len = 0, i, index = 0;
char *result;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++, total_len++)
{
total_len += strlen(av[i]);
}
total_len += ac <= 1;
result = malloc(sizeof(char) * total_len + 1);
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
strcpy(result + index, av[i]);
index += strlen(av[i]);
result[index] = '\n';
index++;
}
result[total_len] = '\0';
return (result);
}
