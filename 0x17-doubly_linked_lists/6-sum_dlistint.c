#include "lists.h"

/**
* sum_dlistint - sums all the data(n) of linked list.
* @head: pointer to the head node.
* Return: sum of all the data, or 0 if its empty.
*/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *ptr_n;
int add = 0;
ptr_n = head;

while (ptr_n != NULL)
{
add += ptr_n->n;
ptr_n = ptr_n->next;
}
return (add);
}
