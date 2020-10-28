#include<stdio.h>
int fact(int n)
{
	if (n == 0)
		return 1;
	else
		return fact(n - 1) * n;
}

int Ifact(int n)
{
	int f=1;
	int i;
	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}
	return f;
}
void main()
{
	int a;
	printf("Enter the number for factorial:\n");
	scanf_s("%d", &a);
	fact(a);
	Ifact(a);
	printf("The factorial using recursion is %d\n", fact(a));
	printf("The factorial using iterative function is %d\n", Ifact(a));
}