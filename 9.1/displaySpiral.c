#include <stdio.h>

#define MAX_SIZE 20

// function definitions
void displaySpiral(int matrix[][MAX_SIZE], int size);
void displayMatrix(int matrix[][MAX_SIZE], int size);
int takeInput(int inputMatrix[][MAX_SIZE]);

int main() {
	int matrix[MAX_SIZE][MAX_SIZE];
	int matrixSize = takeInput(matrix);

	printf("Displaying the whole matrix:\n");
	fflush(stdout);
	displayMatrix(matrix, matrixSize);

	printf("Now, displaying the matrix in a spiral way:\n");
	fflush(stdout);
	displaySpiral(matrix, matrixSize);

	return 0;
}

// already implemented for you
int takeInput(int inputMatrix[][MAX_SIZE]) {
	int size;
	printf("What is the size of your matrix? ");
	fflush(stdout);

	scanf("%d", &size);

	int i;
	for (i = 0; i < size; i++) {
		int j;
		for (j = 0; j < size; j++) {
			printf("Please enter the matrix[%d][%d]: ", i, j);
			fflush(stdout);

			scanf("%d", &inputMatrix[i][j]);
		}
	}

	return size;
}
// already implemented for you
void displayMatrix(int matrix[][MAX_SIZE], int size) {
	int i;
	for (i = 0; i < size; i++) {
		int j;
		for (j = 0; j < size; j++) {
			printf("%4d", matrix[i][j]);
			fflush(stdout);
		}
		printf("\n");
		fflush(stdout);
	}
}


// TO BE COMPLETED BY YOU :)
void displaySpiral(int matrix[][MAX_SIZE], int size) {
	int i;
	int x = size / 100;
	int y = x;
	int x_max = size % 100 - 1;
	int y_max = size % 100 - 1;

	while (size % 100 > 0){
		for (i = x; i <= x_max; i++)
			printf("%4d", matrix[y][i]);

		for (i = y + 1; i <= y_max; i++)
			printf("%4d", matrix[i][x_max]);

		for (i = x_max - 1; i >= x; i--)
			printf("%4d", matrix[y_max][i]);

		for (i = y_max - 1; i > y; i--)
			printf("%4d", matrix[i][x]);

		return displaySpiral(matrix, size + 99);
	}
	return;
}
