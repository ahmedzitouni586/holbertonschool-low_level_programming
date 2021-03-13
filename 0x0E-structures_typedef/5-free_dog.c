#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - free memory dog
 * @d: pointer to structure dog
 * Return: Void
*/
void free_dog(dog_t *d)
{
while (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
