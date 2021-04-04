#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_realloc - reallocate memory from previous
 * @ptr: pointer to previous space
 * @old_size: prm1
 * @new_size: prm2
 * Return: void p
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *allo;
if (ptr == NULL)
{
allo = malloc(new_size);
if (allo == NULL)
{
return (NULL);
}
free(ptr);
return (allo);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
/* real deal */
if (new_size < old_size)
{
return (ptr);
}
allo = malloc(new_size);
if (allo == NULL)
{
return (NULL);
}
free(ptr);
return (allo);
}