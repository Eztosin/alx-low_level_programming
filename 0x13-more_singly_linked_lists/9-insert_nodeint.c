#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the head of the list
* @idx: index of the list where the new node should be added
* @n: data for the new node
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i = 0;
if (!head)
return (NULL);
new_node = malloc(sizeof(*new_node));
if (!new_node)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
temp = *head;
while (temp)
{
if (i == idx - 1)
{
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
i++;
temp = temp->next;
}
free(new_node);
return (NULL);
}
