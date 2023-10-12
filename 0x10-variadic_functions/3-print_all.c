#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed tofunction
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *str;
    char *c = ", ";
	va_start(ap, format);

	while (format && format[j])
		j++;

	while (format && format[i])
	{
		if (i  == (j - 1))
		{
			c = "";
		}
		switch (format[i])
		{
		case 'c':
			printf("%c%s", va_arg(ap, int), c);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), c);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), c);
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, c);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
