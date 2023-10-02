#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 * @argc:  arguments cuonter
 * @argv: arguments value
 * Return: 0, If does not receive two arguments return 1.
 */
int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("0\n");
return (0);
}
int sum = 0;
int i, num;
for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);
if (num == 0 && argv[i][0] != '0')
{
printf("Error\n");
return (1);
}
if (num > 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
