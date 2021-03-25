#include "holberton.h"
/**
* get_bit - get bit value
* @n: integer
* @index: integer
* Return: 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int va;
if (index > sizeof(n) * 8 - 1)
return (-1);
va = (n >> index) & 1;
if (va != 0 && va != 1)
return (-1);
return (va);
}
