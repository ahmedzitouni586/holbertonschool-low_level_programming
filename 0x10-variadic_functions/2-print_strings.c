#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - display strings
 * @separator: space between strings
 * @n: numbers
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
char *s;
va_list xptr;
va_start(xptr, n);
for (x = 0; x < n ; x++)
{
s = va_arg(xptr, char *);
if (s)
printf("%s", s);
else
printf("(nail)");
if (x < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(xptr);
}
