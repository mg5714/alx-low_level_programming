#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 * @argc:  arguments cuonter
 * @argv: arguments value
 * Return: 0
 */
int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
