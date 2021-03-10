#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - checke malloc
 * @b: size
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(sizeof(b));
if (p == NULL)
{
exit(98);
}
return (p);
}
