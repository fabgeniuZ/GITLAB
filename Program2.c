#include <stdio.h>
int calculate(int a, int b)
{
	return a+b;
}
void main()
{
	int a,b = 0;
	a = 1;
	b = 2;
	printf("%d\n", calculate(a,b)); 
}
