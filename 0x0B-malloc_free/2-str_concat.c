#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* str_concat- This function puts the contents of a string into another.
* @s1: Initail string.
* @s2: String to combine with s1
* Return: NULL if function fails.
*/
char *str_concat(char *s1, char *s2)
{
char *ch;
int w, x, y, z;
if (s1 == NULL && s2 == NULL)
{
return (s1);
}
for (w = 0; s1[w] != '\0'; w++)
for (x = 0; s2[x] != '\0'; x++)
ch = malloc(((w + x) + 1) * sizeof(char));
if (ch == NULL)
{
return (NULL);
}
for (y = 0; s1[y] != '\0'; y++)
{
ch[y] = s1[y];
}
for (z = 0; s2[z] != '\0'; z++)
{
ch[y + z] = s2[z];
}
ch[y + z] = '\0';
return (ch);
}
