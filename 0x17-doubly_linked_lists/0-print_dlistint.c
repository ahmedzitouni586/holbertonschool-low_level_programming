#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print element s of a doubly linked list
 * @h: head pointer
 * Return: value
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t cur = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
cur = cur + 1;
}
return (cur);
}
