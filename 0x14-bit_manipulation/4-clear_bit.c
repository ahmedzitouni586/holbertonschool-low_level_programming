#include "holberton.h"
/**
* clear_bit - clear bits
* @n: integer
* @index: integer
* Return: int
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
int a;
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);
a = 1 << index;
*n = *n & ~a;
return (1);
}
