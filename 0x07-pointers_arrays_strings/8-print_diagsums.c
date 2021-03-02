#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print diagonal
 * @a: strings
 * @size: size
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
int i, j;
int sum1;
int sum2;
j = size - 1;
for (i = 0; i < size; i++)
{
sum1 = sum1 + *(a + size * i + i);
sum2 = sum2 + *(a + i * size + size - 1 - i);
j = j - 1;
}
printf("%d,%d\n", sum1, sum2);
}
