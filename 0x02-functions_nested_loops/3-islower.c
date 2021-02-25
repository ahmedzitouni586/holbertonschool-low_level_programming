#include "holberton.h"
/**
 * _islower - print alphabet lower case
 * @c: first integer
 * Return: value
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
