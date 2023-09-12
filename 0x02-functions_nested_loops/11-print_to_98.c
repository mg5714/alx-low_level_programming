#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
if (n <= 98) {
for (int i = n; i <= 98; i++) {
_putchar(i / 10 + '0'); // print tens digit
_putchar(i % 10 + '0'); // print ones digit
if (i != 98) {
_putchar(','); // print comma
_putchar(' '); // print space
}
}
} else {
for (int i = n; i >= 98; i--) {
_putchar(i / 10 + '0'); // print tens digit
_putchar(i % 10 + '0'); // print ones digit
if (i != 98) {
_putchar(','); // print comma
_putchar(' '); // print space
}
}
}
_putchar('\n'); // print newline character
}
