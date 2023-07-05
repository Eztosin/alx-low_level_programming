#include "lists.h"

/**
* sum_listint- A functiom that sums all data (n) of a listint_t list.
* @head: pointer to first node.
* Return: Sum of all data.
*/

int sum_listint(listint_t *head)
{
listint_t *ch;
int add = 0;
ch = head;
if (head == NULL)
return (0);

while (ch != NULL)
{
add = add + ch->n;
ch = ch->next;
}
return (add);
}
