#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

void print_all(const char * const format, ...)
{
va_list all;
unsigned int i = 0;
char *str;
char format_new;

va_start(all, format);

while (format && format[i])
{
format_new = format[i];
switch (format_new)
{
case 'c':
printf("%c", va_arg(all, int));
break;
case 'i':
printf("%d", va_arg(all, int));
break;
case 'f':
printf("%f", va_arg(all, double));
break;
case 's':
str = va_arg(all, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
i++;
continue;
}
if (format[i + 1] != '\0')
printf(", ");
i++;
}

 printf("\n");

va_end(all);
}
