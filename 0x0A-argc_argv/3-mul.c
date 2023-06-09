#include <stdio.h>
#include <stdlib.h>
/**
* main - This program multiplies two numbers on the command line.
* @argc - Counts the arguments on the command line.
* @argv - Argument vector.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int j, mul = 1;
if (argc > 1)
{
for (j = 1; j < argc; j++)
{
mul = mul * atoi(argv[j]);
}
printf("%d\n", mul);
}
if (argc <= 1)
{
printf("Error\n");
}
return (0);
}

