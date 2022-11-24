#include "hash_tables.h"
/**
  * hash_table_create - to create a hash table.
  * @size: size of the array
  * Return: a pointer newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (size == 0 || new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	new_table->size = size;
	return (new_table);
}
