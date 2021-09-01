#include "search_algos.h"

/**
 * binary_search - searches for a value in an array
 * @array: array of integers
 * @size: size of the array
 * @value: the value that we are looking for
 * Return: succes
 */

int binary_search(int *array, size_t size, int value)
{
size_t l = 0;
size_t r = size - 1;
size_t i;
if (array == NULL)
{
return (-1);
}
while (array && l <= r)
{
printf("Searching in array: ");
for (i = l; i <= r; ++i)
{
printf("%d", array[i]);
if (i < r)
printf(", ");
}
printf("\n");
i = (l + r) / 2;
if (array[i] < value)
{
l = i + 1;
}
else if (array[i] > value)
{
r = i - 1;
}
else
{
return (i);
}

}
return (-1);
}
