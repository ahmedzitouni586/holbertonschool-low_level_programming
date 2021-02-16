#include "holberton.h"
/**
 * print_rev - prints a string, in reverse
 * @s : string
 * Return : 0
 */
void print_rev(char *s)
{
int j, k;
j = 0;
while (*(s + j) != 0)
{
j = j + 1;
}
for (k = j - 1; k >= 0; k--)
{
_putchar(*(s + k));
}
_putchar('\n');
}
