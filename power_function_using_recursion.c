#include<stdio.h>
int power(int m, int n)
{
	if (n == 0)
		return 1;
	else
		return power(m, n - 1) * m;
}

int power1(int m, int n)
{
	if (n == 0)
		return 1;
	if (n % 2 == 0)
		return power(m * m, n / 2);
	return m * power(m * m, (n - 1) / 2);
}
void main()
{
	int a, b;
	printf("Enter the number a and power b\n");
	scanf_s("%d%d", &a,&b);
	power(a, b);
	power1(a, b);
	printf("The power of %d and %d is %d\n", a, b, power(a, b));
	printf("The fastest power function compared to previous function:\nThe power of %d and %d is %d", a, b, power1(a, b));
}