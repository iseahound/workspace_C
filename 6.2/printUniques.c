void printUniques(int inputArray[], int size);

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 15

// function headers
int takeInput(int inputArray[]);
void printUniques(int inputArray[], int size);

int main(void) {
	int array[MAX_SIZE];
	int size = takeInput(array);

	if (size > 0 && size < MAX_SIZE) {
		printUniques(array, size);
	}
}

// function declaration
int takeInput(int inputArray[]) {
	int numbers;
	printf("How many numbers do you have in your array? ");
	fflush(stdout);

	scanf("%d", &numbers);

	int i;
	for (i = 0; i < numbers; i++) {
		printf("Please enter the number[%d]: ", i);
		fflush(stdout);

		scanf("%d", &inputArray[i]);
	}

	return numbers;
}

// TO BE COMPLETED BY YOU :)
void printUniques(int inputArray[], int size) {
	int i,j;
	int unique[size];
	for ( i = 0; i < size; i++ ) {
		int found = 0;
		for ( j = 0; j < size; j++ ) {
			if (inputArray[i] == unique[j])
				found = 1;
		}
		if (found == 0){
			unique[i] = inputArray[i];
			printf("%i, ", inputArray[i]);
		}
	}

}
