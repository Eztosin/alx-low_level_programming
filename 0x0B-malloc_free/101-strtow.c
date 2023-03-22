#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* strtow - Splits a string into words.
*
* @str: The string to split.
*
* Return: If str is NULL or contains only whitespace - NULL,
*         Otherwise - a pointer to an array of strings (words).
*/
char **strtow(char *str)
{
char **words, *word;
int i, j, k, len, count = 0;
if (str == NULL || *str == '\0')
return (NULL);
for (i = 0; str[i]; i++)
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
if (count == 0)
return (NULL);
words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL);
for (i = 0, k = 0; i < count; i++)
{
while (str[k] == ' ')
k++;
len = 0;
while (str[k + len] != ' ' && str[k + len] != '\0')
len++;
word = malloc(sizeof(char) * (len + 1));
if (word == NULL)
{
for (i--; i >= 0; i--)
free(words[i]);
free(words);
return (NULL);
}
for (j = 0; j < len; j++)
word[j] = str[k++];
word[j] = '\0';
words[i] = word;
}
words[i] = NULL;
return (words);
}