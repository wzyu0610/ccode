#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("�п�J�Ʀr:");
	scanf_s("%d", &num);
	if (num % 2 == 0)
	{
		printf("%d������\n", num);
	}
	else
	{
		printf("%d���_��\n", num);
	}
	system("pause");
}