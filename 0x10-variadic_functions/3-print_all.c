#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list ap;
char *str, c;
int i, n = 0;

va_start(ap, format);

while (format && format[n])
n++;

while (*format)
{
c = *format;
switch (c)
{
case 'c':
printf("%c", va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
str = va_arg(ap, char *);
if (!str)
str = "(nil)";
printf("%s", str);
break;
}
format++;
if (*format)
printf(", ");
}

printf("\n");
va_end(ap);
}
