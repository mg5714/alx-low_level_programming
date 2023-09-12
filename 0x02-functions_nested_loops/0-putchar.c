#include "main.h"
/**
* main - Entry point
* Description: 'program that prints _putchar, followed by a new line'
* Return: Always 0 (Success)
*/
int main(void)
{
char i[] = "_putchar";
int ch;
for (ch = 0; ch < 8; ch++)
_putchar(i[ch]);
_putchar('\n');
return (0);
}
