#include "holberton.h"
/**
 * puts_half - prints  half of a string,
 * @str : number one
 * Return : 0
 */
void puts_half(char *str)
{
int size = 0;
int j;

while (*(str + size) != 0)
{
size++;
}
size = size - 1;
for (j = (size / 2) + 1; j <= size; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
