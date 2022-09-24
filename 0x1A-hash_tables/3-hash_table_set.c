#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element
 * to the hash table.
 * @ht: the hash table you want to add or update
 * the key/value to
 * @key: the key
 * @value: he value associated with the key.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, *temp;
	unsigned long int index = 0;
	

	if (key == NULL || ht == NULL || (strcmp(key, "") == 0))
		return (0);
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp && strcmp(key, temp->key) == 0)
	{
		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
