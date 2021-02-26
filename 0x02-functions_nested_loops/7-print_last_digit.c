#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @c: integer
 * Return: last digit
 */
int print_last_digit(int c)
{
int last;
last = c % 10;
if (last < 0)
{
last = -last;
}
_putchar (last + '0');
return (last);
}
