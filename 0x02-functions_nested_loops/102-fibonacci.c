#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int i;
long int  prev1 = 1, prev2 = 2, s = 0;
printf("%li, %li, ", prev1, prev2);
for (i = 3; i <= 50; i++)
{
s = prev1 + prev2;
prev1 = prev2;
prev2 = s;
printf("%li", s);
if (i != 50)
printf(", ");
}
printf("\n");
return (0);
}
