#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i, n, sum;
if (argc < 2)
{
printf("0\n");
}
else
{
sum = 0;
for (i = 1; i < argc; i++)
{
for (n = 0; argv[i][n] != '\0'; n++)
{
if (!(argv[i][n] >= '0' && argv[i][n] <= '9'))
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
