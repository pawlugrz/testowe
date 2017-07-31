#include <stdio.h>

int power(int a)
{
	return a*a;
}

int sum(int a, int b)
{
	return a+b;
}

int subtract(int a, int b)
{
	return a-b;
}

float divide(int a, int b)
{
	return (float)a / (float)b;
}

int main()
{
 int x=5, y=6;
 printf("Hello\n");
 printf("%d to the power = %d\n",x,power(5));
 printf("Sum %d and %d = %d\n",x,y,sum(x,y));
 printf("Subtraction of %d and %d = %d\n",x,y,subtract(x,y));
 printf("%d divided by %d = %.2f\n",x,y,divide(x,y));
 return 0;
}

