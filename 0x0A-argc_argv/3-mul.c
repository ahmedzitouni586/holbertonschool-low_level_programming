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
int sum = 0;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}
return (0);
}
