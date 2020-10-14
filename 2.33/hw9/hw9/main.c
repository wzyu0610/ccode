#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int km,oil,ko,fee,golu,kko,kkoo,end;
	printf("一整天的里程數(單位:公里):");
	scanf_s("%d", &km);
	printf("汽油一公升多少錢:");
	scanf_s("%d", &oil);
	printf("平均一公升能行駛多少公里:");
	scanf_s("%d", &ko);
	printf("一天的停車費:");
	scanf_s("%d", &fee);
	printf("一天的通行費:");
	scanf_s("%d", &golu);
	kko = km / ko;//一天通行需要幾公升
	kkoo = kko * oil;//計算油錢
	end = kkoo + fee + golu;
	printf("一天的花費為%d\n", end);
	system("pause");
}