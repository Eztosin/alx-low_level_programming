#include "main.h"
#include <unistd.h>
#include <string.h>
/**
* is_palindrome- Function that checks if a string is palindrome or not.
* @s: Pointer variable.
* Return: 0 if string is not palindrome.
*/
int is_palindrome(char *s)
{
int length = strlen(s);
int x, y;
for (x = 0, y = length - 1; x < y; x++, y--)
{
if (s[x] != s[y])
return (0);
}
return (1);
}
