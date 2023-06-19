#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
* mul_num- Function that multiplies two positive numbers.
* @num1: first number to be passed.
* @num2: second number to be passed
* Return: Error if no digit is passed.
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
exit(98);
}
}
for (k = 0; num2[k] != '\0'; k++)
{
if (!isdigit(num2[k]))
{
printf("Error\n");
exit(98);
}
}
x = strtoul(num1, NULL, 10);
y = strtoul(num2, NULL, 10);
mul = x *y;
printf("%lu\n", mul);
}

/**
* main - Function that multiplies two positive numbers.
* @argc: argument count.
* @argv: argument vector.
* Return: Always 0.
*/

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
