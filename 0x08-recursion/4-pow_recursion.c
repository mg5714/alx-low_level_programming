#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y
 *@x: num
*@y: num
* Return: -1 If y is lower than 0
*/
int _pow_recursion(int x, int y)
{
if (y <= '\0')
{
return (1);
}
if (y % 2 == 0)
{
return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
else
{
return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
}
