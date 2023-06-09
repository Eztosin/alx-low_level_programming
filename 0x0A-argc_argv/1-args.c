#include <stdio.h>
#include <stdlib.h>
/**
* main - This program prints the number of arguments passed into it.
* @argc: Counts the argument passed to command line.
* @argv: Array of pointers(unused variable).
* Return: Always 0.
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
