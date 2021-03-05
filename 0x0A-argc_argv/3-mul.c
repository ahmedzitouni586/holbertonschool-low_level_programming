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
int i, sum = 0;
if (argc == 1)
{
printf("Error\n");
return (1);
}
else
{
for (i = 0; i < argc; i++)
{
sum = atoi(argv[i]) + atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
