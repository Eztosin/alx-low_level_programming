#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* main - Entry point for the program
* @argc: The number of command-line arguments passed to the program
* @argv: An array of strings representing the command-line arguments
*
* Return: 0 on success, 1 on failure
*/
int main(int argc, char **argv)
{
int i, j, len1, len2, sum, tens, *result;
if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
{
printf("Error\n");
return (1);
}
len1 = strlen(argv[1]);
len2 = strlen(argv[2]);
result = _calloc(len1 + len2, sizeof(int));
if (result == NULL)
{
printf("Error\n");
return (1);
}
for (i = len1 - 1; i >= 0; i--)
{
tens = 0;
for (j = len2 - 1; j >= 0; j--)
{
sum = (argv[1][i] - '0') * (argv[2][j] - '0') + result[i + j + 1] + tens;
result[i + j + 1] = sum % 10;
tens = sum / 10;
}
result[i + j + 1] = tens;
}
i = 0;
while (i < len1 + len2 && result[i] == 0)
i++;
if (i == len1 + len2)
_putchar('0');
else
{
for (; i < len1 + len2; i++)
_putchar(result[i] + '0');
}
_putchar('\n');
free(result);
return (0);
}
/**
* is_positive_number - Checks if a string represents a positive number
* @s: The string to check
*
* Return: 1 if the string represents a positive number, 0 otherwise
*/
int is_positive_number(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] < '0' || s[i] > '9')
return (0);
}
return (1);
}
