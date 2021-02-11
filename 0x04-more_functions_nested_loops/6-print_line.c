#include "holberton.h"
/**
 * print_line - print line
 * @n: number one
 * Return: void
 */

void print_line(int n)
{
int m;
if (n > 0)
{
for (m = 1; m <= n; m++)
{
_putchar('_');
}
}
_putchar('\n');
}
