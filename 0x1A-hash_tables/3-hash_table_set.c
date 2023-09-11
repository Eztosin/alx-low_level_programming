#include "hash_tables.h"

/**
* create_pair - creates a new key-value pair
* @ht: the hash table
* @key: the key
* @value: the value
* Return: 1 on success, 0 otherwise.
*/

int create_pair(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *pair;
unsigned long int index;

index = key_index((unsigned char *)key, ht->size);

pair = malloc(sizeof(hash_node_t));
if (pair == NULL)
return (0);

pair->key = strdup(key);
pair->value = strdup(value);
if (pair->key == NULL || pair->value == NULL)
{
free(pair->key);
free(pair->value);
free(pair);
return (0);
}
pair->next = ht->array[index];
ht->array[index] = pair;
return (1);
}

/**
* hash_table_set - adds an element to the hash table
* @ht: hash table to be updated.
* @key: is the key and must not be empty.
* @value: value associated with the key
* Return: 1 on success, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *current;

if (ht == NULL || key == NULL || strcmp(key, "") == 0)
return (0);

current = ht->array[key_index((unsigned char *)key, ht->size)];

while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(current->value);
current->value = strdup(value);
if (current->value == NULL)
return (0);
return (1);
}
current = current->next;
}

return (create_pair(ht, key, value));
}
