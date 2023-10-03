#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins.
 * @argc:  arguments cuonter
 * @argv: arguments value
 * Return: 0 success return if not 1.
 */
int main(int argc, char *argv[])
{
if (argc == 2)
{
int i, lastcent = 0, mon = atoi(argv[i]);
int cents[] = {25, 10, 5, 2, 1};

for (i = 0; i < 5; i++)
{
if (mon >= cents[i])
{
lastcent += mon / cents[i];
mon = mon % cents[i];
if (mon % cents[i] == 0)
{
break;
}

}

}
printf("%d\n", lastcent);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
