#include "lists.h"

/**
* print_listint- This function prints all elements of a listint_t
* list.
* @h: pointer to the first node.
* Return: Elements counted.
*/

size_t print_listint(const listint_t *h)
{
const listint_t *ch;
size_t count = 1;
if (h == NULL)
{
return (0);
}
ch = h;
while (ch->next != NULL)
{
printf("%d\n", ch->n);
ch = ch->next;
count = count + 1;
}
printf("%d\n", ch->n);
return (count);
}
