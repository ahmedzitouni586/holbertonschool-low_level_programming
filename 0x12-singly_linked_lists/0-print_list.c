#include "lists.h"
#include <stdio.h>
/**
* print_list - print list_t
* @h: pionter.
* Return: nodes number
*/
size_t print_list(const list_t *h)
{
int a;
size_t len = 0;
const list_t *head = h;
a = 0;
while (head != NULL)
{
if (head->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", head->len, head->str);
head = head->next;
len++;
a++;
}
return (len);
}
