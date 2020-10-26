#include<stdio.h>
void recu(int n)
{
	if (n > 0)
	{
		printf("%d\n", n);
		recu(n - 1);
	}
}

int main()
{
	int a;
	printf("Enter the number\t");
	scanf_s("%d", &a);
	recu(a);
	return 0;
}