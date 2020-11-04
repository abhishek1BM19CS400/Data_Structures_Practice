#include<stdio.h>
int fib(int n)
{
	if (n <= 1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}
void main()
{
	int n=9;
	fib(n);
	printf("%d", fib(n));
}