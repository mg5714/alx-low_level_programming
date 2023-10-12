#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator:  separator
 * @n:  int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
va_arg(args, int)
if (separator != NULL && i != n - 1)
printf("%d%s", n, separator);
va_end(args)
}
