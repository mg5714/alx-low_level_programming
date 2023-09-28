
#include "main.h"
/**
 * _puts_recursion - a function that prints a string.
 *@s: string
* Return: function
*/
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        putchar ('\0');
    }
    else 
    {
        putchar (*s);
        _puts_recursion(s + 1);
    }
}
