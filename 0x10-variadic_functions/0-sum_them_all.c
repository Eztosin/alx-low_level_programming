#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - Returns the sum of all parameters given.
* @n: The number of arguments.
* @...: Variable number of arguments.
*
* Return: The result of all the parameters given.
*/

int sum_them_all(const unsigned int n, ...)
{
va_list numbers;
int result = 0;
unsigned int j;

va_start(numbers, n);
if (n == 0)
return (0);

for(j = 0; j < n; j++)
result = result + va_arg(numbers, int);
va_end(numbers);
return (result);
}
