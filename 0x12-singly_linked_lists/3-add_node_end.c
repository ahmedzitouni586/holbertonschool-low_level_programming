#include "lists.h"
/**
 * _strlen - string length
 * @s: char
 * Return: element
 */
unsigned int _strlen(const char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
continue;
}
return (i);
}
/**
 * add_node_end - add ode
 * @head: head pionter
 * @str: string
 * Return: element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *current;
current = *head;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = _strlen(str);
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
while (current->next != NULL)
current = current->next;
current->next = new;
}
return (new);
}
