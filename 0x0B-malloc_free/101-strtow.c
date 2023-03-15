#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* word_count - counts the number of words in a string
* @str: the string to count words in
*
* Return: the number of words in the string
*/
int word_count(char *str)
{
int count = 0;
int in_word = 0;
while (*str)
{
if (*str == ' ' || *str == '\t' || *str == '\n')
{
in_word = 0;
}
else if (in_word == 0)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}
/**
* strtow - splits a string into words
* @str: the string to split
*
* Return: a pointer to an array of strings (words), or NULL if it fails
*/
char **strtow(char *str)
{
char **words;
int i, j, k, len, count;
if (str == NULL || *str == '\0')
return (NULL);
count = word_count(str);
words = malloc((count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (i = 0, j = 0; i < count; i++)
{
while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
j++;
len = 0;
while (str[j + len] != ' ' && str[j + len] != '\t' && str[j + len] != '\n'
&& str[j + len] != '\0')
len++;
words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}
strncpy(words[i], &str[j], len);
words[i][len] = '\0';
j += len;
}
words[i] = NULL;
return (words);
}
