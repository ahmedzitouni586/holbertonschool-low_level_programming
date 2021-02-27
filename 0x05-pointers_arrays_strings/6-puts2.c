#include "holberton.h"
/**
 * puts2 - put a string
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
int i;
for (i = 0; *(str + i); i++)
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
}
_putchar('\n');
}
