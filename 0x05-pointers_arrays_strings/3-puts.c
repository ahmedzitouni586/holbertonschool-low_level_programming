#include "holberton.h"
/**
 * _puts : print a string
 * @*str : number one
 * Return : 0
 */
void _puts(char *str)
{
int j = 0;

while (*(str + j))
{
_putchar(*(str + j));
j = j + 1;
}
_putchar('\n');
}
