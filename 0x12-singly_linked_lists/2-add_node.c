#include "lists.h"

/**
* add_node- A function that adds a new node at the beginning of a
* list_t list.
* @head: points to the pointer that points to list head.
* @str: string of characters.
* Return: new pointer to list head.
*/
list_t *add_node(list_t **head, const char *str)
{

/* creating a new node */
list_t *newptr;

newptr = malloc(sizeof(list_t));
if (newptr == NULL)
return (NULL);
newptr->str = strdup(str);

if (newptr->str == NULL)
{
free(newptr);
return (NULL);
}
newptr->len = strlen(str);
/*check if head is NULL */
if (*head == NULL)
{
newptr->next = NULL;
}
/* point the next of the new node to what head was pointing to */
else
{
newptr->next = *head;
}
/* redirect head to point to new node */
*head = newptr;
return (newptr);
}
