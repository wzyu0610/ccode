#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2,num3;
	printf("叫块ぃ计:");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	if (num1 > num2&&num1 > num3)
	{
		printf("程计%d\n", num1);
	}
	if (num2 > num1&&num2 > num3)
	{
		printf("程计%d\n", num2);
	}
	if (num3 > num2&&num1 < num3)
	{
		printf("程计%d\n", num3);
	}
	if (num1 < num2&&num1 < num3)
	{
		printf("程计%d\n", num1);
	}
	if (num2 < num1&&num2 < num3)
	{
		printf("程计%d\n", num2);
	}
	if (num3 < num2&&num1 > num3)
	{
		printf("程计%d\n", num3);
	}
	system("pause");
}