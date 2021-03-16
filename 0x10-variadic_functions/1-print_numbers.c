#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - display numbers
 * @separator: space between numbers
 * @n: numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list xptr;
va_start(xptr, n);
for (x = 0; x < n ; x++)
{
printf("%d", va_arg(xptr, unsigned int));
if (x != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(xptr);
}
