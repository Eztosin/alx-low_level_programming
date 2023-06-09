#include <stdio.h>
#include <stdlib.h>
/**
* main - A program that prints its name followed by a new line.
* @argc: argument count
* @argv: argument vector (array of pointers)
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
