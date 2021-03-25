#include "holberton.h"
/**
* binary_to_uint - binary to int
* @b: pointer
* Return: int
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int va = 0;
int i;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
}
i = 0;
while (b[i] == '0' || b[i] == '1')
{
va <<= 1;
va += b[i] - '0';
i++;
}
return (va);
}
