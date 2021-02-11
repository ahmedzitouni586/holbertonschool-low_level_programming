#include "holberton.h"
/**
 * print_diagonal - print diagonal
 * @n: number one
 * Return: void
 */

void print_diagonal(int n)
{
int m;

if (n > 0)
{
for (m = 1; m <= n; m++)
{
_putchar('\\');
}
}
_putchar('\n');
}
