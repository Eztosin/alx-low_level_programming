This file contains more exercises on singly linked lists to further
help our understanding of the concept.

-A function that prints all the elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf.

-A function that returns the number of elements in a linked listint_t list.
Prototype: size_t listint_len(const listint_t *h);

-A function that adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

-A function that adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed.

-A function that frees a listint_t list.
Prototype: void free_listint(listint_t *head);

-A function that frees a listint_t list.
Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL.

-A function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0.

-A function that returns the nth node of a listint_t linked list.
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL.