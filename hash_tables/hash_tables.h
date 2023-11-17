#ifndef HASHTABLES_H
#define HASHTABLES_H
/**
 * struct hash_node_s - node of a hash table
 * @key: the key, string, unique in hash table
 * @value: the value corresponding to the key
 * @next: a pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;
/**
 * struct hash_table_s - hash table data structure
 * @size: the size of an array
 * @array: an array of size @size
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;
#endif
