#include <stdio.h>

int power(int a)
{
	return a*a;
}

int sum(int a, int b)
{
	return a+b;
}

int main()
{
 int x=5, y=6;
 printf("Hello\n");
 printf("%d to the power = %d\n",x,power(5));
 printf("Sum %d and %d = %d\n",x,y,sum(x,y));
 return 0;
}
