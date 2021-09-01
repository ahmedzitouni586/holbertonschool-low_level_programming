#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: array of integers
 * @size: size of the array
 * @value: the value that we are looking for
 * Return: succes
 */

int linear_search(int *array, size_t size, int value)
{
unsigned int i;
if (array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%i] = [%d]\n", i, array[i]);
getchar();
if (array[i] == value)
{
return (i);
}

}
return (-1);
}
