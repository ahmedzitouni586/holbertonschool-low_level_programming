#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head pointer
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *next = head->next;

    while(next)
    {
        dlistint_t *node = next;
        next = node->next;
        Node_free(node);
    }

    free(head);
}

/**
 * Node_free - frees node
 * @node: node.
 * Return: 0
 */

void Node_free(dlistint_t *node)
{
    free(node->n);
    free(node);
}
