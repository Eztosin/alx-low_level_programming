#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, 98 on wrong number of arguments,
* 99 if operator is invalid, 100 if division/modulo by 0.
*/
int main(int argc, char *argv[])
{
int a, b, result;
int (*op_func)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
op_func = get_op_func(argv[2]);
if (op_func == NULL || argv[2][1] != '\0')
{
printf("Error\n");
return (99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
{
printf("Error\n");
return (100);
}
result = op_func(a, b);
printf("%d\n", result);
return (0);
}
