#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point 
* Description: 'The last digit'
* Return: Always 0 (Success)
*/
int main(void)
{
int n, ld;
ld = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (ld > 5)
{
printf("Last digit of %d is %d",n, ld ,"and is greater than 5");
}
else if (ld == 0)
{
printf("Last digit of %d is %d",n, ld ,"and is 0");
}
else if (ld < 6)
{
printf("Last digit of %d is %d",n, ld ,"and is less than 6 and not 0");
}
return (0);
}
