#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;
	printf("�п�J�Ĥ@�ӼƦr:");
	scanf_s("%d", &num1);
	printf("�п�J�ĤG�ӼƦr:");
	scanf_s("%d", &num2);
	if (num1%num2 != 0)
	{
		printf("%d���O%d������\n",num1, num2);
	}
	else
	{
		printf("%d�O%d������\n", num1, num2);
	}
	system("pause");
}