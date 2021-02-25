#include <stdio.h>
/**
 */
int main(void)
{
char a;
int b;
long int c;
long long int n;
float m;
{
printf("Size of a char: %d byte(s)\n",sizeof (a));
printf("Size of an int: %d byte(s)\n",sizeof (b));
printf("Size of a long int: %ld byte(s)\n",sizeof (c));
printf("Size of a long long int: %ld byte(s)\n",sizeof (n));
printf("Size of a float: %x byte(s)\n",sizeof (m));
}
return (0);
}
