#include "stdio.h"
/**
 *main - prints the first 98 Fibonacci numbers
 *Return: 0
 */
int main(void)
{
unsigned long int i, j, n;
i = 1;
j = 2;
n = 0;
while (n < 48)
{
printf("%lu, ", i);
printf("%lu, ", j);
i = i + j;
j = i + j;
n++;
}
printf("%lu, ", i);
printf("%lu", j);
printf("\n");
return (0);
}