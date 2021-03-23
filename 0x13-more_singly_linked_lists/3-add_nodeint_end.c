#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - add elemnt
* @head: pionter
* @n: int
* Return: pionter
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *current;
current = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
else
{
while (current->next != NULL)
{
current = current->next;
}
current->next = new;
}
return (new);
}
