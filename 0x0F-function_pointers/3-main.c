#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 if wrong number of arguments,
 * 99 if operator is invalid, 100 if division by 0.
 */
int main(int argc, char *argv[])
{
 int x, j, result;
 int (*oprations)(int, int);

 if (argc != 4)
 {
  printf("Error\n");
  exit(98);
 }

 x = atoi(argv[1]);
 j = atoi(argv[3]);

 if (j == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
 {
  printf("Error\n");
  exit(100);
 }

 oprations = get_op_func(argv[2]);

 if (oprations == NULL)
 {
  printf("Error\n");
  exit(99);
 }

 result = oprations(x, j);

 printf("%d\n", result);

 return (0);
}
