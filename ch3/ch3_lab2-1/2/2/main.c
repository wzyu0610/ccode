#include <stdio.h>
#include <stdlib.h>

long int f(int a);

int main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;

	printf("�D�ƦC�զXC(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
    printf("n=");
	scanf_s("%d", &n);

	a = f(m);
	b = f(n);
	c = f(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);

	system("pause");
}
long int f(int p)
{
	int c;
	long int r = 1;

	for (c = 1; c <= p; c++)
	{
		r = r * c;
	}
	return r;
}