#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void reset_to_98(int *n);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The char to print
* Return: on success 1, on error -1.
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}

#endif /* MAIN_H */
