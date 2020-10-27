#include<stdio.h>
int fun(int n)
{
	if (n > 0)
	{
		fun(n - 1);
		printf("%d ", n);
	}
	return 0;
}

void main()
{
	int a = 5;
	fun(a);
}