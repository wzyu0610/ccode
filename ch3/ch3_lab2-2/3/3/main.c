#include <stdio.h>
#include <stdlib.h>

long int rf(int p);

void main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;

	printf("�D�ƦC�զXC(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = rf(m);
	b = rf(n);
	c = rf(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);
	system("pause");
}

long int rf(int p)
{
	if (p > 1)
	{
		long int r = p * rf(p - 1);
		return r;
	}
	else
	{
		return 1;
	}
}