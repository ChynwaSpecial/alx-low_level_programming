#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table
 * @ht: Pointer to the hash table
 * @key: The key to the string
 * @value: Value associated with the key
 *
 * Return: 1 if successful, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
