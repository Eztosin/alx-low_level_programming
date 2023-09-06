#include "main.h"
#include <stdlib.h>

/**
* count_word- helper function to count the number of words.
* @s: array of chars
* Return: number of words counted.
*/
int count_word(char *s)
{
int i = 0, len = 0;

while (s[i] != '\0')
{
if (s[i] != ' ')
{
len++;
while (s[i] != ' ' && s[i] != '\0')
{
i++;
}
}
else
{
i++;
}
}
return (len);
}


/**
* strtow- splits a string into words.
* @str: Pointer to an array of strings
* Return: pointer to an array of strings
*/

char **strtow(char *str)
{
char **new_ptr;
int i, j, k = 0, length;

if (str == NULL || *str == '\0')
return (NULL);

length = count_word(str);

new_ptr = malloc(sizeof(char *) * (length + 1));
if (new_ptr == NULL)
return (NULL);

for (i = 0; i < length; i++)
{
while (*str == ' ')
str++;
j = 0;
while (str[j] != ' ' && str[j] != '\0')
j++;

new_ptr[i] = malloc(sizeof(char *) * (j + 1));
if (new_ptr[i] == NULL)
{
for (k = 0; k < i; k++)
free(new_ptr[k]);
free(new_ptr);
return (NULL);
}
for (k = 0; k < j; k++)
new_ptr[i][k] = *str++;

new_ptr[i][k] = '\0';
}

new_ptr[length] = NULL;
return (new_ptr);
}
