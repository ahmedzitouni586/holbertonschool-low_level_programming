#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum
 * @n: number of argument
 * Return: pointer
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
double sum;
va_list xptr;
if (n == 0)
{
return (0);
}
va_start(xptr, n);
for (x = 0; x < n; x++)
sum = sum + va_arg(xptr, int);
va_end(xptr);
return (sum);
}
