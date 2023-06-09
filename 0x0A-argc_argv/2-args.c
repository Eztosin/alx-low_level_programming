#include <stdio.h>
#include <stdlib.h>
/**
* main - This program prints strings all on a new line.
* @argc: Counts the argument on command line.
* @argv: Argument vector, helps to print all arguments per line.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int j;
for (j = 0; j < argc; j++)
{
printf("%s\n", argv[j]);
}
return (0);
}
