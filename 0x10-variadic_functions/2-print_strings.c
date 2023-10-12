#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints strings, followed by a new line.
 * @separator:  separator
 * @n:  int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i ;
va_list args;
char *s;
va_start(args, n);
for (i = 0; i < n; i++)
{
s = va_arg(args, char*);
if (s == NULL)
{
printf("nil")
}
printf("%s", s);
if (separator != NULL && i != n - 1)
printf("%s", separator);
printf("\n");
va_end(args);
}
}
