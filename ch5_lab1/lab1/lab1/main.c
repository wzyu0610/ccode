#include <stdio.h>
#include <stdlib.h>

#define students 3
#define exams 4

void minimum(int grades[][exams], int pupils, int tests);
void maximum(int grades[][exams], int pupils, int tests);
void average(int grades[][exams], int pupils, int tests);
void printarray(int grades[][exams], int pupils, int tests);
void printmenu();

int main()
{
	int studentgrades[students][exams] = { {77,68,86,73},
	{96,87,89,78},
	{70,90,86,81} };
	void(*processgrages[4])(int[students][exams], int, int) = { printarray,minimum,maximum,average };
	int choice = 0;
	while (choice != 4)
	{
		do {
			printmenu();
			scanf_s("%d", &choice);
		} while (choice < 0 || choice>4);
		if (choice != 4) {
			(*processgrages[choice])(studentgrades, students, exams);
		}
		else {
			printf("\tprogram ended.\n");
		}
	}
	system("pause");
	return 0;
}
void minimum(int grade[][exams], int pupils, int tests) {
	int i, j;
	int lowgrade = 100;
	for (i = 0; i < pupils; i++) {
		for (j = 0; j < tests; j++) {
			if (grade[i][j] < lowgrade)
				lowgrade = grade[i][j];
		}
	}
	printf("\n\tthe lowest grade is %d", lowgrade);
	printf("\n");
}

void maximum(int grade[][exams], int pupils, int tests) {
	int i, j;
	int highgrade = 0;
	for (i = 0; i < pupils; i++) {
		for (j = 0; j < tests; j++) {
			if (grade[i][j] > highgrade)
				highgrade = grade[i][j];
		}
	}
	printf("\n\tthe highest grade is %d", highgrade);
	printf("\n");
}

void average(int grade[][exams], int pupils, int tests) {
	int i, j,t;
	for (i = 0; i < pupils; i++) {
		t = 0;
		for (j = 0; j < tests; j++) {
			t += grade[i][j];
		}
	printf("\n\tthe average grade for student %d is%.1f",i+1,(double)t/tests);
	}

	printf("\n");
}

void printarray(int grade[][exams], int pupils, int tests) {
	int i, j;
	printf("\n\t\t\t[0]    [1]    [2]    [3]");
	for (i = 0; i < pupils; i++) {
		printf("\n\tstudentgrade[%d]", i);
		for (j = 0; j < tests; j++) {
			printf("%-7d", grade[i][j]);
		}
	}
	printf("\n");
}

void printmenu() {
	printf("\n");
	printf("\tenter a choice:\n");
	printf("\t0 print the array of grades\n");
	printf("\t1 find the minimum grade\n");
	printf("\t2 find the maximum grade\n");
	printf("\t3 print the average on all tests for each student\n");
	printf("\t4 end program\n");
	printf("choice:");

}