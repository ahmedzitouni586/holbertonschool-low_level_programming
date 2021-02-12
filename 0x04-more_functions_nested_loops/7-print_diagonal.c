#include "holberton.h"
/**
 * print_diagonal - print diagonal
 * @n: number one
 * Return: void
 */

void print_diagonal(int n)
{
int m, k;

if (n > 0)
{
for (m = 1; m <= n; m++)
{
for (k = 1; k <= m - 1; k++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
