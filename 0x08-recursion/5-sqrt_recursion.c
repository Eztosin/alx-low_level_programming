#include "main.h"
#include <unistd.h>
#include <math.h>
/**
* _sqrt_help - A function that returns the natural square
* root of a number.
* @x: Number to check.
* @y: Root number.
* Return: -1 if n is not a natural square root.
*/
int _sqrt_help(int x, int y)
{
if (y * y == x)
{
return (y);
}
else if (y == x)
{
return (-1);
}
else
{
return (_sqrt_help(x, y + 1));
}
}
/**
* _sqrt_recursion - A function that returns the natural square
* root of a number.
* @n: Number to check.
* Return: -1 if n is not a natural square root.
*/
int _sqrt_recursion(int n)
{
int i = 0;
if (n <= 0)
{
return (-1);
}
else
{
return (_sqrt_help(n, i));
}
}
