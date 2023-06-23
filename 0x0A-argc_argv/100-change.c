#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - Prints the minimum number of coins to make change.
* @argc: The number of command-line arguments.
* @argv: An array containing the command-line arguments.
*
* Return: 0 on success, 1 if the number of arguments is invalid.
*/

int main(int argc, char *argv[])
{
int cents, coins = 0;
char *ptr;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = strtol(argv[1], &ptr, 10);
if (*ptr != '\0' || cents < 0)
{
printf("0\n");
}
if (cents >= 25)
{
coins = coins + (cents / 25);
cents = cents % 25;
}
if (cents >= 10)
{
coins = coins + (cents / 10);
cents = cents % 10;
}
if (cents >= 5)
{
coins = coins + (cents / 5);
cents = cents % 5;
}
if (cents >= 2)
{
coins = coins + (cents / 2);
cents = cents % 2;
}
if (cents >= 1)
{
coins = coins + (cents / 1);
cents = cents % 1;
}
printf("%d\n", coins);
return (0);
}
