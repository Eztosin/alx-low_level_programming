#include "main.h"
#include <unistd.h>
#include <string.h>
/**
* is_palindrome - Function that checks if a string is palindrome.
* @ch1: pointer variable.
* @ch2: pointer variable.
* Return: 0 if string is not palindrome.
*/
int is_palindrome_help(char *ch1, char *ch2);
int is_palindrome(char *s)
{
char *s1;
s1 = s + (strlen(s)) - 1;
if (*s != *s1)
{
return (0);
}
return (is_palindrome_help(s, s1));
}

/**
* is_palindrome_help- Helper function to be used to check if string
* is palindrome or not.
* @ch1: pointer variable.
* @ch2: pointer variable.
* Return: the function and check every character.
*/
int is_palindrome_help(char *ch1, char *ch2)
{
if (ch1 >= ch2)
{
return (1);
}
if (*ch1 == *ch2)
{
return (is_palindrome_help(ch1 + 1, ch2 - 1));
}
return (0);
}
