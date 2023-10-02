#include <stdio.h>
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
if (argc != 3)
{
printf("Error\n");
return (1);
}
for (num1 = 1; num1 < 3; num1++)
num1 = atoi(argv[1]);
num2 *= atoi(argv[num1]);
printf("%d\n", num2);
return (0);
}
