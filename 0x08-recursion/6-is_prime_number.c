#include "main.h"
/**
 * is_prime_number - a function that check prime number
 *@n: num
*@x: num
* Return: 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime(int n, int x);
int is_prime_number(int n)
{
return (is_prime(n, 2));
}
/**
 * is_prime - a function that check prime number
 *@n: num
*@x: num
* Return: int 1
*/
int is_prime(int n, int x)
{
if (n >= 2 && x >= n)
{
return (1);
}
else if (n % x == 0 ||  n <= 1)
{
return (0);
}
else
return (is_prime(n, x + 1));
}
