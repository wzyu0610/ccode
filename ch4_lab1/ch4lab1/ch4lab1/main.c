#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main(void)
{
	int face;
	int roll;
	int f[SIZE] = { 0 };

	srand(time(NULL));

	for (roll = 1; roll <= 6000; roll++)
	{
		face = 1 + rand() % 6;
		f[face]++;
	}

	printf("%s%17s\n", "face", "fre");

	for (face = 1; face < SIZE; face++)
	{
		printf("%4d%17d\n", face, f[face]);
	}
	system("pause");
	return 0;

}