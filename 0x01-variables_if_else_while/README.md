0-positive_or_negative.c ::

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: 'Positive anything is better than negative nothing '
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}






1-last_digit.c ::

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
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ld);
}
else if (ld == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ld);
}
else if (ld < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
}
return (0);
}





2-print_alphabet.c ::

#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints the alphabet in lowercase'
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}






3-print_alphabets.c ::

#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints the alphabet in lowercase,and upper'
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet, ALPHABET;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
for (ALPHABET = 'A'; ALPHABET <= 'Z' ; ALPHABET++)
{
putchar(ALPHABET);
}
putchar('\n');
return (0);
}






4-print_alphabt.c ::

#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints the alphabet in lowercase,and upper'
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
if (alphabet != 'q' && alphabet != 'e')
{
putchar(alphabet);
}
}
putchar('\n');
return (0);
}






5-print_numbers.c ::

#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints all single digit numbers of base 10'
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
printf("%d", i);
}
printf("\n");
return (0);
}






6-print_numberz.c ::

#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints all single digit numbers of base 10'
* only use the putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}





7-print_tebahpla.c ::

#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints all single digit numbers of base 10'
* only use the putchar
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a' ; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}





8-print_base16.c ::

#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints all the numbers of base 16 in lowercase'
* only use the putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char x;
for (i = 0; i < 10 ; i++)
{
putchar('0' + i);
}
for (x = 'a' ; x <= 'f' ; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}





9-print_comb.c ::

#include <stdio.h>
/**
* main - Entry point
* Description: 'C program that prints all possible combinations
*                           of single-digit numbers'
* only use the putchar
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
putchar('0' + i);
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
