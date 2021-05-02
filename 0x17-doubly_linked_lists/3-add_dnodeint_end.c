#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - add element at the end of a doubly linked list
 * @head: head pointer
 * @n: const int
 * Return: value
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tmp = *head;
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
new_node->prev = *head;
(*head)->next = new_node;
return (new_node);
while (tmp->next != NULL)
{
tmp = tmp->next;
}
new_node->prev = tmp;
new_node->next = NULL;
tmp->next = new_node;
return (new_node);
}
