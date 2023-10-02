 #include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc:  arguments cuonter
 * @argv: arguments value
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int i;
    printf("%d\n", argc);
    for(i = 0; i < argc-1; i++)
    {
      printf("%s", argv[i]);
    }
    return (0);
}
