#include "main.h"
/**
 * _puts_recursion - a function that prints a string in reverse.
 *@s: string
* Return: function
*/
void _print_rev_recursion(char *s)
{
if (len > 0)
{
puchar ('\n');
_print_rev_recursion(s - 1);
putchar (s);
}
}
