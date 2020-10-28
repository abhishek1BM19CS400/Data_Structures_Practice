#include<stdio.h>
void main()
{
	int n;
	int i;
	int sum = 0;
	printf("Enter the first n natural numbers:\n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("The sum of n natural number is %d", sum);
}