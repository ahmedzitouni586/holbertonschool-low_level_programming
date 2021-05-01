#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - add element to a doubly linked list
 * @head: head pointer
 * @n: const int
 * Return: value
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t* new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        exit(1);
        return;
    }
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = new_node;
    }
    *head = new_node;
    return (new_node);
}
