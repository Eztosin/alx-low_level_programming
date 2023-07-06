#include "lists.h"

/**
* reverse_listint - A function that reverses a listint_t linked list.
* @head: A double pointer to the head of the linked list.
*
* Return: A pointer to the first node of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;
prev = NULL;
if (*head == NULL || (*head)->next == NULL)
return (*head);

while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (prev);
}
