#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all arguments
 * @ac: argc
 * @av: argv
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
int i, j, t;
int len = 0;
char *x;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
}
x = malloc((len + ac + 1) * sizeof(char));
if (x == NULL)
{
return (NULL);
}
t = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
x[t] = av[i][j];
t++;
}
x[t] = '\n';
t++;
}
x[t] = '\0';
return (x);
}
