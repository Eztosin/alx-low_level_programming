#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* c: char
* i: integer
* f: float
* s: char * (if the string is NULL, print (nil) instead)
* any other char should be ignored
*/
void print_all(const char * const format, ...)
{
va_list ap;
int i = 0;
char c, *s;
float f;
va_start(ap, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(ap, int);
printf("%c", c);
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
f = va_arg(ap, double);
printf("%f", f);
break;
case 's':
s = va_arg(ap, char *);
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
}
if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
format[i] == 's') && (format[i + 1] != '\0'))
printf(", ");
i++;
}
printf("\n");
va_end(ap);
}
