#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square
 * root of a number
 *@n: num
 *@mid: num
* Return: -1 If n does not have a natural square root
*/
int _sqrt_helper(int n, int mid);
int _sqrt_recursion(int n)
{
if (n < '\0')
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
else
return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - a function that returns the natural square
 * root of a number
 *@n: num
 *@mid: num
* Return: -1 If n does not have a natural square root
*/
int _sqrt_helper(int n, int mid)
{
if (mid * mid == n)
{
return (mid);
}
else if (mid * mid < n)
{
return (_sqrt_helper(n, mid + 1));
}
else
{
return (_sqrt_helper(n, mid - 1));
}
}
