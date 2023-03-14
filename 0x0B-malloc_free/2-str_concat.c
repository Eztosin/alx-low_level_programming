#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatentes two strings
* @s1: the first string
* @s2: the second string
*
* Return: pointer to a new string containing the concatenated strings,
* or NULL if allocation fails
*/
char *str_concat(char *s1, char *s2)
{
unsigned int len1, len2, i, j;
char *concat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (len1 = 0; s1[len1]; len1++)
;
for (len2 = 0; s2[len2]; len2++)
;
concat = malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (j = 0; j < len2; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';
return (concat);
}
