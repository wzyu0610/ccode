#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int km,oil,ko,fee,golu,kko,kkoo,end;
	printf("�@��Ѫ����{��(���:����):");
	scanf_s("%d", &km);
	printf("�T�o�@���ɦh�ֿ�:");
	scanf_s("%d", &oil);
	printf("�����@���ɯ��p�h�֤���:");
	scanf_s("%d", &ko);
	printf("�@�Ѫ������O:");
	scanf_s("%d", &fee);
	printf("�@�Ѫ��q��O:");
	scanf_s("%d", &golu);
	kko = km / ko;//�@�ѳq��ݭn�X����
	kkoo = kko * oil;//�p��o��
	end = kkoo + fee + golu;
	printf("�@�Ѫ���O��%d\n", end);
	system("pause");
}