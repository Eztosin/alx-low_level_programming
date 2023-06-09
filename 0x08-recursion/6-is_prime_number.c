#include "main.h"
#include <unistd.h>
/**
* _prime_help - A helper function to check recursively if a number is prime.
* @x: Prime number.
* @y: Divisor.
* Return: Always 0.
*/
int _prime_help(int x, int y)
{
if (y * y > x)
{
return (1);
}
else if (x % y == 0)
{
return (0);
}
{
return (_prime_help(x, y + 1));
}
}

/**
* is_prime_number- Function that returns 1 if integer is a prime number
* @n: Number to check.
* Return: -1 if n is not a prime number.
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (_prime_help(n, 2));
}
}
