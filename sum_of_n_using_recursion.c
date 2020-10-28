#include<stdio.h>
int fun(int n)
{
	if (n == 0)
		return 0;
	else
		return fun(n-1)+n;
}

void main()
{
	int a = 5;
	fun(a);
	printf("%d", fun(a));
}