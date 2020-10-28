#include<stdio.h>
int fun(int n)
{
	if (n > 0)
		return n*(n + 1) / 2;

}

void main()
{
	int a = 5;
	fun(a);
	printf("%d", fun(a));
}