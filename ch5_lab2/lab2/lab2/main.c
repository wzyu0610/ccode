#include <stdio.h>
#include <stdlib.h>

#define is 5
#define r 10

void rr(int iss, int ra);
void hr();
void lr();
float ar(int iss);
void dr();

int re[is][r];
const char *topics[is] = { "global warning","the economy","war","health care","education" };
int main()
{
	int re, i;
	do
	{
		printf("please rate the following topics on a scale from 1-10""\n 1=least important,10=most important\n");
		for (i = 0; i < is; i++)
		{
			do
			{
				printf("%s?", topics[i]);
				scanf_s("%d", &re);
			} while (re < 1 || re>10);
			rr(i, re);
		}
		printf("enter 1 to stop.enter 0 to rate the issues again.");
		scanf_s("%d", &re);
	} while (re != 1);
	dr();
	system("pause");
	return 0;
}

void rr(int iss, int ra)
{
	re[iss][ra - 1]++;
}

void hr() {
	int hir = 0;
	int ht = 0;
	int i, j;

	for (i = 0; i < is; i++)
	{
		int tr = 0;
		for (j = 0; j < r; j++)
		{
			tr += re[i][j] * (j + 1);
		}
		if (hir < tr)
		{
			hir = tr;
			ht = i;
		}
	}

	printf("the highest rated topic was");
	printf("%s", topics[ht]);
	printf("with a total rating of %d\n", hir);
}
void lr() {
	int lowr = 0;
	int lt = 0;
	int i, j;
	for (i = 0; i < is; i++) {
		int tr = 0;
		for (j = 0; j < r; j++) {
			tr += re[i][j] * (j + 1);
		}
if (i == 0)
{
	lowr = tr;
}
if (lowr > tr)
{
	lowr = tr;
	lowr = i;
}
	}
	printf("the lowest rated topic was");
	printf("%s", topics[lt]);
	printf("with a total rating of %d\n", lowr);
}

float ar(int iss)
{
	float total = 0;
	int c = 0;
	int i;

	for (i = 0; i < r; i++)
	{
		if (re[iss][i] != 0)
		{
			total += re[iss][i] * (i + 1);
			c += re[iss][i];
		}
	}
	return total / c;
}

void dr()
{
	int i, j;
	printf("%20s", "topic");

	for (i = 1; i <= r; i++)
	{
		printf("%4d", i);
	}
	printf("%20s", "average rating");
	for (i = 0; i < is; i++)
	{
		printf("%20s", topics[i]);
		for (j = 0; j < r; j++) {
			printf("%4d", re[i][j]);
		}
		printf("%20.2f", ar(i));
	}
	hr();
	lr();
}