#include "holberton.h"
/**
 * factorial - factorial of an integer
 * @n: integer
 *Return: factorial
 */
int factorial(int n)
{
if (n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
