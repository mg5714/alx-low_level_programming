#include "function_pointers.h"
/**
* print_name - a function that prints name
* @name: name to print
* @f: str
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
(*f)(name);
}
