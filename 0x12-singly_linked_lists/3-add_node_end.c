#include <stdlib.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to a pointer to the head of the list
* @str: string to be added as the new node's str field
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
size_t len = 0;
while (str && str[len])
len++;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = (str == NULL ? NULL : strdup(str));
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
return (new_node);
}
