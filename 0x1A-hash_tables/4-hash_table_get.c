#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: the hash table being looked into.
* @key: key being looked for.
* Return: the value associated with the element or NULL otherwise
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = key_index((unsigned char *)key, ht->size);
hash_node_t *current;

if (ht == NULL)
return (NULL);

current = ht->array[index];

while (current != NULL)
{
if (strcmp(current->key, key) == 0)
return (current->value);

current = current->next;
}

return (NULL);
}
