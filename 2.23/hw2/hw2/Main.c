#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2,num3;
	printf("�п�J�T�Ӥj�p���P���Ʀr:");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	if (num1 > num2&&num1 > num3)
	{
		printf("�̤j���Ʀr��%d\n", num1);
	}
	if (num2 > num1&&num2 > num3)
	{
		printf("�̤j���Ʀr��%d\n", num2);
	}
	if (num3 > num2&&num1 < num3)
	{
		printf("�̤j���Ʀr��%d\n", num3);
	}
	if (num1 < num2&&num1 < num3)
	{
		printf("�̤p���Ʀr��%d\n", num1);
	}
	if (num2 < num1&&num2 < num3)
	{
		printf("�̤p���Ʀr��%d\n", num2);
	}
	if (num3 < num2&&num1 > num3)
	{
		printf("�̤p���Ʀr��%d\n", num3);
	}
	system("pause");
}