#include "holberton.h"
/**
 * swap_int - swap the values of two integers
 * @a : integer
 * @b : integer
 * Return : value
 */
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
