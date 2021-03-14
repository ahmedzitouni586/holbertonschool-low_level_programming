#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - function
 *@array: array
 *@size: char
 *@cmp: pointer to a function
 *Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (size <= 0)
return (-1);
else if (array != 0 && cmp != 0)
{
for (x = 0; x < size ; x++)
{
if (cmp(array[x]) != 0)
return (x);
}
}
return (-1);
}
