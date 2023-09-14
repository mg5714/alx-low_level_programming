#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n) {
for (int i = 0; i < n; i++) {
for (int j = 0; j < i; j++) {
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
