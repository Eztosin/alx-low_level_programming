#include "lists.h"

/**
 * get_nodeint_at_index- A function that returns the nth node of a
 * listint_t list.
 * @head: Pointer to first node in list.
 * @index: Index of the node.
 * Return: Pointer to list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ch;
unsigned int new = 0;

ch = head;
if (head == NULL)
return (NULL);

while (ch != NULL)
{
if (new == index)
return (ch);
ch = ch->next;
new++;
}
return (ch);
}
