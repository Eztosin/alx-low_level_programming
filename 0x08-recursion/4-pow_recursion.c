#include "main.h"
#include <unistd.h>
#include <math.h>
/**
* _pow_recursion - A function that returns the value a variable
* raised to the power of another variable.
* Return: -1 If power variable is less than 0.
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}

