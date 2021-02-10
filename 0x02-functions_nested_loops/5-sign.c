#include "holberton.h"
/**
 * int print_sign - print sign
 *
 * Return : 1 if grater than zero
 * Return : 0 if is zero
 * Return : -1 if less than  zero
 */
int print_sign(int n)
{
int r;
if (n > 0)
{
_putchar ('+');
r = 1;
}
else if (n < 1)
{
_putchar ('-');
r = -1;
}
else if (n == 0)
{
_putchar ('0');
r = 0;
}
return (r);
}
