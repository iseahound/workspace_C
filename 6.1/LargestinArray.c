/*
 ============================================================================
 Name        : 1.c
 Author      : HELLO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
int largest(int inputArray[], int size);

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 15

// function headers
int takeInput(int inputArray[]);
int largest(int inputArray[], int size);

int main(void) {
	int array[MAX_SIZE];
	int size = takeInput(array);

	if (size > 0 && size < MAX_SIZE) {
		printf("Largest number among the entered number is %d",
				largest(array, size));
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
int largest(int inputArray[], int size) {
	int i;
	int j = 0;
	for ( i = 0; i < size; i++ ) {
		if (inputArray[i] > j)
			j = inputArray[ i ];
	}
	return j;
}
