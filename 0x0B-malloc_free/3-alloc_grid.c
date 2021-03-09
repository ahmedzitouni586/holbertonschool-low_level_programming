#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - allocate grid
 * @width: first
 * @height: second
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int a, b;
int **x;
if (width <= 0 || height <= 0)
{
return ('\0');
}
x = malloc(sizeof(int *) * height);
if (x == NULL)
{
return (NULL);
}
for (a = 0 ; a < height ; a++)
{
x[a] = malloc(sizeof(int) * width);
if (x[a] == NULL)
{
for (a = a - 1; a >= 0 ; a--)
{
free(x[a]);
}
free(x);
return (NULL);
}
for (b = 0 ; b < width ; b++)
{
x[a][b] = 0;
}
}
return (x);
}
