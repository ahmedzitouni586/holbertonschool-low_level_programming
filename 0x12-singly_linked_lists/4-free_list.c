#include "lists.h"
/**
* free_list - free list
* @head: head ointer
* Return: void
*/
void free_list(list_t *head)
{
list_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}