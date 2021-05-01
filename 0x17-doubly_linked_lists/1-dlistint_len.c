#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - find the size of a doubly linked list
 * @h: head pointer
 * Return: value
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t res = 0;
while (h != NULL)
{
res++;
h = h->next;
}
return (res);
}
