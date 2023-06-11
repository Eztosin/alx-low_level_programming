#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - This program adds two numbers on the command line.
* @argc: Used to count the argument on command line.
* @argv: Used in a loop and checks if variable j is a digit.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int j, sum = 0;
if (argc > 1)
{
for (j = 1; j < argc; j++)
{
long int k = strtol(argv[j], NULL, 10);
if (k == 0)
{
printf("Error\n");
return (1);
}
else
sum = sum + k;
}
printf("%d\n", sum);
}
else if (argc == 1)
{
printf("%d \n", argc - 1);
}
return (0);
}
