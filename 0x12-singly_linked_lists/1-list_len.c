#include "lists.h"
/**
* list_len - A function that lists all elements of a list_t list.
* @h: pointer to list head.
* Return: Number of elements counted.
*/

size_t list_len(const list_t *h)
{
const list_t *ch;
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
