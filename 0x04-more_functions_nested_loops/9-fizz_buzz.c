#include <stdio.h>
/**
*main - program that prints either number
*if num multiples of 3 print Fizz
*if num multiples of 5 print Buzz
*if num multiples of 3 && 5print fizzBuzz
*Return: returns 0
*/
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && !(x % 5 == 0))
printf("Fizz");
else if (x % 5 == 0 && !(x % 3 == 0))
printf("Buzz");
else if (x % 3 == 0 && x % 5 == 0)
printf("FizzBuzz");
else
printf("%d", x);
if (x != 100)
printf(" ");
else
printf("\n");
}
return (0);
}
