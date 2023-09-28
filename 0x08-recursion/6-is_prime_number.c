#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - a function that check prime number
 *@n: num
*@x: num
* Return: 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime(int n, int x);
int is_prime_number(int n)
{
return (is_prime(n, 1));
}
/**
 * is_prime - a function that check prime number
 *@n: num
*@x: num
* Return: 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime(int n, int x)
{
if (n <= 1 || n % x == 0)
{
return (0);
}
if (n >= 2 && x >= n)
{
return (1);
}
else
return (is_prime(n, x +1)); 
}
