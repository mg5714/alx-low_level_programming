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
va_list args;
unsigned int i;

va_start(args, n);
for (i = 0; i < n; i++)
{
va_arg(args, char *);
if (va_arg(args, char *) == NULL)
printf("(nil)");
else
printf("%s", va_arg(args, char *));
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
