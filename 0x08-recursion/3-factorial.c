#include "main.h"
#include <unistd.h>
/**
* factorial - A function that returns the factorial of a number
* @n: Given number.
* Return: -1 if given number is lower than 0.
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * (factorial(n - 1)));
}
}
