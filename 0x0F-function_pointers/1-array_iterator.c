#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function
 * @array: array
 * @size: size
 * @action: pointer
 * Return:0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;
if (size != 0 && array != 0 && action != 0)
for (a = 0; a < size ; a++)
action(array[]);
}
