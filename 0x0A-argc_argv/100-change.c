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
    int cents, num_coins, remaining;
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    
    int cents = atoi(argv[1]);
    
    if (cents < 0)
    {
        printf("0\n");
        return (0);
    }
    
    num_coins = 0;
    remaining = cents;
    
    while (remaining > 0)
    {
        if (remaining >= 25)
        {
            num_coins++;
            remaining -= 25;
        } else if (remaining >= 10)
        {
            num_coins++;
            remaining -= 10;
        } else if (remaining >= 5)
        {
            num_coins++;
            remaining -= 5;
        } else if (remaining >= 2)
        {
            num_coins++;
            remaining -= 2;
        } else
        {
            num_coins++;
            remaining -= 1;
        }
    }
    
    printf("%d\n", num_coins);
    
    return (0);
}
