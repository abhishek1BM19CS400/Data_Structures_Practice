#include<stdio.h>
int funA(int n)
{
	if (n > 100)
		return n - 10;
	else
		return funA(funA(n + 11));
}

void main()
{
	int a = 95;
	funA(a);
	printf("%d", funA(a));
}