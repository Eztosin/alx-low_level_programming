#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at the given index
* of a linked list
* @head: A double pointer to the head of the linked list
* @index: The index of the node to delete
* Return: 1 if deletion succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *new, *old;
unsigned int j = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
new = *head;
*head = new->next;
free(new);
return (1);
}

new = *head;
while (new != NULL)
{
if (j == index)
{
old->next = new->next;
free(new);
return (1);
}
old = new;
new = new->next;
j++;
}
return (-1);
}
