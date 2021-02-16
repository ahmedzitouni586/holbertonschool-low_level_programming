#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str : number one
 * Return : 0
 */
void puts2(char *str)
{
int j;
for (j = 0; *(str + j); j++)
{
if (j % 2 == 0)
{
_putchar(*(str + j));
}
}
_putchar('\n');
}
