#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat- This function puts the contents of a
* string into another.
* @s1: Initial string.
* @s2: String to combine with s1
* @n: Number of characters to copy to s2.
* Return: NULL if function fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ch;
unsigned int w, x, y, z;

for (w = 0; s1[w] != '\0'; w++)
for (x = 0; s2[x] != '\0'; x++)
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (n >= x)
n = x;
ch = malloc((w + n + 1) * sizeof(char));
if (ch == NULL)
{
return (NULL);
}
for (y = 0; y < w; y++)
{
ch[y] = s1[y];
}
for (z = 0; z < n; z++)
{
ch[y + z] = s2[z];
}
ch[y + z] = '\0';
return (ch);
}
