#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between the strings.
* @n: The number of strings passed to the function.
* @...: Variable number of strings.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list strings;
char *ch;
va_start(strings, n);
for (i = 0; i < n; i++)
{
ch = va_arg(strings, char *);
if (ch == NULL)
printf("nil\n");
else
printf("%s", ch);
if (separator == NULL)
return;
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
