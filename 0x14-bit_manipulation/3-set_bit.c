
#include "holberton.h"
/**
* set_bit - sef value of bit
* @n: integer
* @index: integer
* Return: 0
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int a = 1;
if (sizeof(n) * 8 < index)
return (-1);
a <<= index;
*n = *n | y;
return (1);
}
