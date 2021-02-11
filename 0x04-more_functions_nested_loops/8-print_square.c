#include "holberton.h"
/**
 * print_square - print square
 * @size: number one
 * Return: void
 */
void print_square(int size)
{
int i;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
_putchar('#');
}
}
_putchar('\n');
}
