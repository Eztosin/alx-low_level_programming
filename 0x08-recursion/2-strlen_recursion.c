#include "main.h"
#include <unistd.h>
/**
* _strlen_recursion - Returns the length of a string until null byte.
* @s: char variable.
* Return: Always 0.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
