#include "main.h"
/**
 * _puts_recursion - a function that prints a string in reverse.
 *@s: string
* Return: function
*/
void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
putchar ('\n');
_print_rev_recursion(s - 1);
putchar (*s);
}
}
