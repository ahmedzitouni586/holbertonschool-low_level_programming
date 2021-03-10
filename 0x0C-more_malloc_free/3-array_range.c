#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - array of integers
 * @min: minimal size
 * @max: maximal size
 * Return: 0
 */
int *array_range(int min, int max)
{
int *p;
int i = 0, j = 0;
if (min > max)
{
return (NULL);
}
i = (max - min) + 1;
p = malloc(sizeof(int) * (max - min) + 1);
if (p == NULL)
{
return (NULL);
}
for (i = min; i < max; i++)
{
p[j] = i;
min++;
j++;

}
return (p);
}
