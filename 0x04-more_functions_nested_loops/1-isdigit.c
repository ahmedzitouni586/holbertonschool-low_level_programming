#include "holberton.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * description - checks digit
 * @c: number one
 * Return: value
 */
int _isdigit(int c)
{
if ((c >= 40) && (c <= 49))
{
return (1);
}
else
return (0);
}
