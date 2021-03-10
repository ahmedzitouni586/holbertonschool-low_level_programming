#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: array
 * @size: size of the arrray
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(size * nmemb);
if (p == NULL)
{
return (NULL);
}
return (p);
}
