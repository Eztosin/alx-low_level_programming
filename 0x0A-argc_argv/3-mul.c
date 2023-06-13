#include <stdio.h>
#include <stdlib.h>
/**
* main - This program multiplies two numbers on the command line.
* @argc: Used to count the argument on command line.
* @argv: Used to intialize the variable j.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int j, mul = 1;
if (argc > 2)
{
for (j = 1; j < argc; j++)
{
int k = strtol(argv[j], NULL, 10);
mul = mul *k;
}
printf("%d\n", mul);
}
if (argc <= 2)
{
printf("Error\n");
return (1);
}
return (0);
}
