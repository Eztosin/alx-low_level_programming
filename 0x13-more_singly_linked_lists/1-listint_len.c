#include "lists.h"
/**
* listint_len- This function prints all elements of a listint_t
* list.
* @h: pointer to the first node.
* Return: Elements counted.
*/
size_t listint_len(const listint_t *h)
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
ch = ch->next;
count = count + 1;
}
return (count);
}
