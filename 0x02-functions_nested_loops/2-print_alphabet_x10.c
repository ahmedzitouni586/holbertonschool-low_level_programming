#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet * 10
 *Return : 0
 */
void print_alphabet_x10(void)
{
int k;
int m;
for (k = 0; k <= 9; k++)
{
for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}
_putchar('\n');
}
}
