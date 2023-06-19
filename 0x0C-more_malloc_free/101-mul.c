#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
*
*
*
*/
void mul_num(char *num1, char *num2)
{
unsigned long x, y, mul;
int j, k;
for (j = 0; num1[j] != '\0'; j++)
{
if (!isdigit(num1[j]))
{
printf("Error\n");
exit (98);
}
}
for (k = 0; num2[k] != '\0'; k++)
{
if (!isdigit(num2[k]))
{
printf("Error\n");
exit (98);
}
}
x = strtoull(num1, NULL, 10);
y = strtoull(num2, NULL, 10);
mul = x * y;
printf("%lu\n", mul);
}
int main(int argc, char *argv[])
{
if (argc != 3)
{
write(STDERR_FILENO, "Error\n", strlen("Error\n"));
return (98);
}
mul_num(argv[1], argv[2]);
return (0);
}
