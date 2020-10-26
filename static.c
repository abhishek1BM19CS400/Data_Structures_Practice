#include<stdio.h>
int fun1(int n)
{
	static int x = 0;
	if (n > 0)
	{
		x++;
		return fun1(n - 1) + x;
	}
	return 0;
}

int main()
{
	int a;
	a=fun1(5);
	printf("%d",a);
	return 0;
}
