#include <stdio.h>
#include <stdlib.h>

int odd(int u);
int even(int u);
int tsum(int u);

int main(void)
{
	int n, sum;
	char ac;
	printf("1+2+...+n=?請輸入n=");
	scanf_s("%d", &n);
	printf("請問要做奇數和(O)、偶數和(E)和整數和(I)，請輸入:");
	scanf_s(" %c", &ac);

	switch (ac)
	{

	case 'O':
		sum = odd(n);
		break;
		case 'E':
			sum = even(n);
			break;
		case 'I':
			sum = tsum(n);
			break;
		default:
			printf("輸入錯誤\n");
			return -1;
	}
	printf("總合為%d\n", sum);
	system("pause");
	return 0;
}
int odd(int u)
{
	int i, t = 0;
	for (i = 1; i <= u; i++)
	{
		if (i % 2 == 1)
		{
			t = t + i;
		}
	}
	return t;
}
int even(int u)
{
	int i, t = 0;
	for (i = 1; i <= u; i++)
	{
		if (i % 2 == 0)
		{
			t = t + i;
		}
	}
	return t;
}
int tsum(int u)
{
	return odd(u) + even(u);
}