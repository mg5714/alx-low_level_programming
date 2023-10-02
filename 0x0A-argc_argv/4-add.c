#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that adds positive numbers.
 * @argc:  arguments cuonter
 * @argv: arguments value
 * Return: 0, If does not receive two arguments return 1.
 */
int main(int argc, char *argv[])
{
int i, sum;
char num;
if (argc == 1)
printf("0\n");
else
{
sum = 0;
for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);
if (num == 0 && argv[i][0] != '0')
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
}
return (0);
}
