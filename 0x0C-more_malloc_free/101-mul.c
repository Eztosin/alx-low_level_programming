#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* main - multiplies two positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int len1, len2, i, j, n1, n2, carry, sum, *result;
if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
{
printf("Error\n");
return (1);
}
len1 = strlen(argv[1]);
len2 = strlen(argv[2]);
result = (int *) calloc(len1 + len2, sizeof(int));
if (result == NULL)
return (1);
for (i = len1 - 1; i >= 0; i--)
{
n1 = argv[1][i] - '0';
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
n2 = argv[2][j] - '0';
sum = n1 *n2 + result[i + j + 1] + carry;
carry = sum / 10;
result[i + j + 1] = sum % 10;
}
if (carry)
result[i + j + 1] = carry;
}
if (result[0] == 0)
i = 1;
else
i = 0;
for (; i < len1 + len2; i++)
putchar(result[i] + '0');
putchar('\n');
free(result);
return (0);
}
/**
* is_positive_number - checks if a string represents a positive number
* @s: the string to check
*
* Return: 1 if @s represents a positive number, 0 otherwise
*/
int is_positive_number(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
