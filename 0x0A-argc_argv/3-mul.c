#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that multiplies two numbers.
 * @argc:  arguments cuonter
 * @argv: arguments value
 * Return: 0, If does not receive two arguments return 1.
 */
int main(int argc, char *argv[])
{
int num1, num2;
if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
num2 = 1;
for (num1 = 1; num1 < 3; num1++)
num2 *= atoi(argv[num1]);
printf("%d\n", num2);
}
return (0);
}
