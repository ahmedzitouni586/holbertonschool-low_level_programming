#include "hash_tables.h"
/**
 *key_index - index of a key.
 *@key: the key
 *@size: size of the array of hashtable
 *Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int h;
h = hash_djb2(key);
h = h % size;
return (h);
}