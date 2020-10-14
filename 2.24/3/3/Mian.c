#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("叫块计:");
	scanf_s("%d", &num);
	if (num % 2 == 0)
	{
		printf("%d案计\n", num);
	}
	else
	{
		printf("%d计\n", num);
	}
	system("pause");
}