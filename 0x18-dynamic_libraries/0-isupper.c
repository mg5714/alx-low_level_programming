#include "main.h"
/**
*_isupper - function that checks for uppercase character.
*@c: tested character
*Return: 1 if c is uppercase, otherwise Return 0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
