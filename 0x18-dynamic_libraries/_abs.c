#include "holberton.h"
/**
 * _abs - compute absolute value of integer.
 * @x: type integer
 * Return: always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}