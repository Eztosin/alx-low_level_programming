#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
* _strdup - A function that returns a pointer to a newly allocated
* space in memory.
* @str: Initial string.
* Return: NULL if there's insufficient memory.
*/
char *_strdup(char *str)
{
char *ch;
int k, j = 0;

if (str == NULL)
{
return (NULL);
}

while (str[j] != '\0')
{
j++;
}
ch = malloc((j + 1) * sizeof(char));

if (ch == NULL)
{
return (NULL);
}

for (k = 0; (str[k] != '\0'); k++)
{
ch[k] = str[k];
}
ch[k] = '\0';
return (ch);
}
