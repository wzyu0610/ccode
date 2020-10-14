#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;
	printf("請輸入第一個數字:");
	scanf_s("%d", &num1);
	printf("請輸入第二個數字:");
	scanf_s("%d", &num2);
	if (num1%num2 != 0)
	{
		printf("%d不是%d的倍數\n",num1, num2);
	}
	else
	{
		printf("%d是%d的倍數\n", num1, num2);
	}
	system("pause");
}