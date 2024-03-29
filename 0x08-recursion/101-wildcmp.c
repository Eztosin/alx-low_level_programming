#include <unistd.h>
#include <string.h>
/**
* wildcmp - Function that compares two strings if the are identical.
* @s1: Array of strings.
* @s2: Array of strings containing special characters.
* Return: 1 if identical, 0 otherwise.
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
return ((wildcmp(s1, s2 + 1)) || (wildcmp(s1 + 1, s2)));
}
return (0);
}
