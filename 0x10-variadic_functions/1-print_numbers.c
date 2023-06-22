#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_numbers - Prints numbers, followed by a new line.
* @separator: The string to be printed between the numbers.
* @n: The number of integers passed to the function.
* @...: Variable number of integers.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list new_nos;
unsigned int i;
int num;

va_start(new_nos, n);
for (i = 0; i < n; i++)
{
num = va_arg(new_nos, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");

va_end(new_nos);
}
