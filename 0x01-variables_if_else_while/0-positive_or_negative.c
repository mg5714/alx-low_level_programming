#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* 
*  main - c program jgk ffkfkf fmfm
*
*
*  Return - (0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n > 0)
    {
        printf("%d, is positive");
    }
    else if (n < 0)
    {
        printf("%d, is negative");
    }
    else if (n == 0)
    {
        printf("%d, is zero");
    }
    
	return (0);
}
