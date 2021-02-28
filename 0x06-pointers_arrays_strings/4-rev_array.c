#include "holberton.h"
/**
 * reverse_array - reverses the content of an array
 * @a: number one
 * @n: number two
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int i, j;
i = 0;
n = n - 1;
while (i < n)
{
j = a[i];
a[i] = a[n];
a[n] = j;
i++;
n--;
}
}
