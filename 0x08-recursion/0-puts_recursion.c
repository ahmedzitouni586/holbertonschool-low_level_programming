#include "holberton.h"
/**
 * _puts_recursion - print a string
 * @s: number one
 * Return: 0
 */
void _puts_recursion(char *s)
{
while (*s)
{
_putchar(*s);
s++;
}
_putchar('\n');
}
