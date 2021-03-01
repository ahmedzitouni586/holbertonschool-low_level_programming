#include "holberton.h"
/**
 * leet- encode a string
 * @n: string
 * Return: 0
 */
char *leet(char *n)
{
int i = 0;
int j;
char a[] = {'A', 'E', 'O', 'T', 'L'};
char b[] = {'a', 'e', 'o', 't', 'l'};
char l[] = {'4', '3', '0', '7', '1'};
while (n[i])
{
for (j = 0; j <= 5; j++)
{
if (a[j] == *(n + i) || b[j] == *(n + i))
{
*(n + i) = l[j];
break;
}
}
i++;
}
return (n);
}
