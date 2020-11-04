#include<stdio.h>
int fact(int n)
{
	if (n == 0)
		return 1;
	else
		return fact(n - 1) * n;
}

int ncr(int n, int r)
{
	if (n == r || r == 0)
		return 1;
	else
		return fact(n) / (fact(r) * (fact(n - r)));
}

int main()
{
	int n = 5;
	int r = 3;
	printf("%d", ncr(n, r));
	return 0;
}