#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int i;
int j;

for (i = '0'; i < '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
if ((i > j) || (i != j))
{
putchar(i);
putchar(j);
}
if ((i != '8') || (j != '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
