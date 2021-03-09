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
int h, w;
int **x;
if (width <= 0 || height <= 0)
{
return (NULL);
}
x = malloc(sizeof(int *) * height);
if (x == NULL)
{
return (NULL);
}
for (h = 0; h < height; h++)
{
x[h] = malloc(sizeof(int) * width);
if (x[h] == NULL)
{
for (w = 0; w < h; w++)
{
free(x[w]);
}
free(x);
return (NULL);
}
}
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
{
x[h][w] = 0;
}
}
return (x);
}
