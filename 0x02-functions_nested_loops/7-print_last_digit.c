#include "holberton.h"
/**
 * int - print last digit
 * @x : type integer
 * Return : last digit
 */
int print_last_digit(int c)
{
int last;
last = c % 10;
if (last < 0)
{
last = -last;
}
_putchar (last +'0');
return (last);
}
