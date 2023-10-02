 #include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc:  arguments cuonter
 * @argv: arguments value
 * Return: 0
 */
int main(int argc, char *argv[])
{
    (void)argv;
    printf("%d\n", argc - 1);
    return (0);
}
