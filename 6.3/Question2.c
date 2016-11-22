void takeInputs(int frequencyArray[], int gradeCount);
void displayHistogram(int frequencyArray[]);

#include <stdio.h>
#include <stdlib.h>

// function headers:
void takeInputs(int frequencyArray[], int gradeCount);
void displayHistogram(int frequencyArray[]);

int main(void) {
	int numberOfStudents;
	int array[10] = {0};
	printf("Welcome Professor.\n");
	printf("Please enter the number of students in your class: ");
	fflush(stdout);

	scanf("%d", &numberOfStudents);
	takeInputs(array, numberOfStudents);
	displayHistogram(array);

}

// function declaration
// TO BE COMPLETED BY YOU :)
void takeInputs(int frequencyArray[], int gradeCount) {
	int i;
	int temp[gradeCount];
	for (i = 0; i < gradeCount; i++) {
		printf("List grade number %i: ", i);
		scanf("%d", &temp[i]);
	}
	for (i = 0; i < gradeCount; i++) {
		if (temp[i] <= 10) {
			frequencyArray[0]++;
		}
		else if (temp[i] <= 20) {
			frequencyArray[1]++;
		}
		else if (temp[i] <= 30) {
			frequencyArray[2]++;
		}
		else if (temp[i] <= 40) {
			frequencyArray[3]++;
		}
		else if (temp[i] <= 50) {
			frequencyArray[4]++;
		}
		else if (temp[i] <= 60) {
			frequencyArray[5]++;
		}
		else if (temp[i] <= 70) {
			frequencyArray[6]++;
		}
		else if (temp[i] <= 80) {
			frequencyArray[7]++;
		}
		else if (temp[i] <= 90) {
			frequencyArray[8]++;
		}
		else if (temp[i] <= 100) {
			frequencyArray[9]++;
		}
	}
}
void displayHistogram(int frequencyArray[]) {
	printf("\n00 < grades <= 10: ");
	while (frequencyArray[0] > 0){
		frequencyArray[0]--;
		printf("*");
	}
	printf("\n10 < grades <= 20: ");
	while (frequencyArray[1] > 0){
		frequencyArray[1]--;
		printf("*");
	}
	printf("\n20 < grades <= 30: ");
	while (frequencyArray[2] > 0){
		frequencyArray[2]--;
		printf("*");
	}
	printf("\n30 < grades <= 40: ");
	while (frequencyArray[3] > 0){
		frequencyArray[3]--;
		printf("*");
	}
	printf("\n40 < grades <= 50: ");
	while (frequencyArray[4] > 0){
		frequencyArray[4]--;
		printf("*");
	}
	printf("\n50 < grades <= 60: ");
	while (frequencyArray[5] > 0){
		frequencyArray[5]--;
		printf("*");
	}
	printf("\n60 < grades <= 70: ");
	while (frequencyArray[6] > 0){
		frequencyArray[6]--;
		printf("*");
	}
	printf("\n70 < grades <= 80: ");
	while (frequencyArray[7] > 0){
		frequencyArray[7]--;
		printf("*");
	}
	printf("\n80 < grades <= 90: ");
	while (frequencyArray[8] > 0){
		frequencyArray[8]--;
		printf("*");
	}
	printf("\n90 < grades <= 100: ");
	while (frequencyArray[9] > 0){
		frequencyArray[9]--;
		printf("*");
	}
}
