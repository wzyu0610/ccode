#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hei, wei,hei2,end;
	printf("�п�J����(���:����):");
	scanf_s("%f", &hei);
	printf("�п�J�魫(���:����):");
	scanf_s("%f", &wei);
	hei2 = hei / 100;
	end = wei/(hei2 * hei2);
	printf("�z��BMI��:%f", end);
	system("pause");
}