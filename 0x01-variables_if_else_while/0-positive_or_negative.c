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
        printf("moj");
    }
    else if (n == 0)
    {
        printf("zero");
    }
    else if (n < 0)
    {
        printf("nag");
    }
    
	return (0);
}
