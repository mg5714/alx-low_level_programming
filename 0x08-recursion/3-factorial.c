#include "main.h"
/**
 * factorial - a function that returns the length of a string.
 *@n: num
* Return: -1 If n is lower than 0,
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if  (n == 0)
{
return (1);
}
factorial(n) = n * factorial(n - 1)
}
