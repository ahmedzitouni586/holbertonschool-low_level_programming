#include "holberton.h"
/**
 * flip_bits - flip bits
 * @n: num1
 * @m: num2
 * Return: value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i;
int a;
a = sizeof(unsigned long int) * 8;
i = 0;
while (a != 0)
{
if ((n & 1) != (m & 1))
i++;
n = n >> 1;
m = m >> 1;
a--;
}
return (i);
}
