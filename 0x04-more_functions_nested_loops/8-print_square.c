#include "holberton.h"
/**
 * print_square - print square
 * @size: number one
 * Return: void
 */
void print_square(int size)
{
int x, y;
if (size > 0)
{
for (x = 1; x <= size; ++x)
{
for (y = 1; y <= size; ++y)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
