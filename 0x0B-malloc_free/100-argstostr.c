#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* argstostr- This function concatenates all the arguments of
* a program.
* @ac: Argument count.
* @av:array of pointers.
* Return: NULL if it fails
*/

char *argstostr(int ac, char **av)
{
int i, j, k, length = 0;
char *ch;

if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
length++;
}
ch = malloc((length + 1) * sizeof(char));

if (ch == NULL)
return (NULL);

for (i = 0, k = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, k++)
{
ch[k] = av[i][j];
}
ch[k] = '\n';
k++;
}
ch[k] = '\0';
return (ch);
}
