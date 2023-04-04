#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: pointer to the head of the listint_t list.
*
* Return: the number of nodes in the listint_t list.
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
int num = h->n;
int i = 1;
int digits;
if (num < 0)
{
putchar('-');
num *= -1;
}
digits = num;
while (digits > 9)
{
digits /= 10;
i *= 10;
}
while (i >= 1)
{
putchar((num / i) % 10 + '0');
i /= 10;
}
putchar('\n');
count++;
h = h->next;
}
return (count);
}
