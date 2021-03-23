#include "lists.h"
/**
 * listint_len - length
 * @h: head
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
size_t x = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (x);
}

