0-preprocessor ::
#!/bin/bash
gcc -E 0-preprocessor -o c $CFILE







1-compiler ::
#!/bin/bash
gcc -c 1-compiler $CFILE










2-assembler ::
#!/bin/bash
gcc -S $CFILE









3-name ::
#!/bin/bash
gcc -o cisfun $CFILE










4-puts.c

#include <stdio.h>

/**
 * main - C program that prints exactly "Programming is like
 *                building a multilingual puzzle, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{

char text[] = "\"Programming is like building a multilingual puzzle";

puts(text);

return (0);

}










5-printf.c :

#include <stdio.h>

/**
 * main - C program that prints exactly with proper grammar, but the outcome
 *                is a piece of art,, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{

char text[] = "with proper grammar, but the outcome is a piece of art,\n";

printf("%s", text);

return (0);

}







6-size.c:

#include <stdio.h>
/**
* main - C program that prints the size of various types on the computer
* Return: Always 0 (Success)
*/

int main(void)
{

printf("Size of a char: %zu byte(s)\n", sizeof(char));

printf("Size of an int: %zu byte(s)\n", sizeof(int));

printf("Size of a long int: %zu byte(s)\n", sizeof(long int));

printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));

printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}





100-intel:
#!/bin/bash
gcc -S -masm=intel $CFILE







101-quote.c:

#include <unistd.h>

/**
 * main -  C program that prints string,followed by a new line.
 *                        to the standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

return (1);
}