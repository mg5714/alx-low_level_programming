#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square
 * root of a number
 *@n: num
 *@start: num
 *@end: num
* Return: -1 If n does not have a natural square root
*/
int _sqrt_helper(int n, int start, int end);
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
return (_sqrt_helper(n, 1, n));
}
/**
 * _sqrt_helper - a function that returns the natural square
 * root of a number
 *@n: num
 *@start: num
 *@end: num
* Return: -1 If n does not have a natural square root
*/
int _sqrt_helper(int n, int start, int end)
{
int mid = (start + end) / 2;
if (mid * mid == n)
return (mid);
else if (mid * mid >= n)
return (_sqrt_helper(n, start, mid - 1));
else
return (_sqrt_helper(n, mid + 1, end));
}
