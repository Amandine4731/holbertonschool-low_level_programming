#include "hash_tables.h"
/**
 * hash_table_set - to add an element to a ash table
 * @key: the key
 * @value: the value
 * @ht: hash table struct
 * Rerurn: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	ht->key = (char*) malloc(strlen(key) + 1);
	ht->value = (char*) malloc(strlen(value) + 1);

	strcpy(ht->key, key);
	strcpy(ht->value, value);

	return (ht);
}
