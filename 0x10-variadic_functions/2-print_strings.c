#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator:  separator
 * @n:  int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i ;
va_list args;
va_start(args, n);
if (n == NULL)
{
printf("nil")
}
for (i = 0; i < n; i++)
{
printf("%s", args, int);
if (separator != NULL)
printf("%s", separator);
printf("\n");
va_end(args);
}
}
