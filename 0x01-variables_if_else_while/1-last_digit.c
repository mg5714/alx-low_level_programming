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
printf("Last digit of %d is %d\n\n", n,ld);
}
else if (ld == 0)
{
printf("Last digit of %d is %d\n",n,ld);
}
else if (ld < 6)
{
printf("Last digit of %d is %d\n",n,ld);
}
return (0);
}
