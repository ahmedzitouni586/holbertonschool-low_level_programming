#include "holberton.h"
/**
 * _puts - print a string
 * @str: string
 * Return: 0
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
