#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - Concatenates two strings.
* @s1: First string.
* @s2: Second string.
* @n: Maximum number of bytes from s2 to concatenate.
*
* Return: Pointer to concatenated string or NULL if allocation fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len = 0, s2_len = 0;
unsigned int i, j;
char *concat;
if (s1 != NULL)
{
while (s1[s1_len])
s1_len++;
}
if (s2 != NULL)
{
while (s2[s2_len])
s2_len++;
}
if (n >= s2_len)
n = s2_len;
concat = malloc(sizeof(char) * (s1_len + n + 1));
if (concat == NULL)
return (NULL);
for (i = 0; i < s1_len; i++)
concat[i] = s1[i];
for (j = 0; j < n; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';
return (concat);
}
