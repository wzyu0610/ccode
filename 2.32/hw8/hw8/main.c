#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hei, wei,hei2,end;
	printf("請輸入身高(單位:公分):");
	scanf_s("%f", &hei);
	printf("請輸入體重(單位:公斤):");
	scanf_s("%f", &wei);
	hei2 = hei / 100;
	end = wei/(hei2 * hei2);
	printf("您的BMI為:%f", end);
	system("pause");
}