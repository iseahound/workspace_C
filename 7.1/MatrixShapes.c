#include <stdio.h>


#define MAX_SIZE 20

// function definitions
int isUpperTriangular(int matrix[][MAX_SIZE], int size);
int isLowerTriangular(int matrix[][MAX_SIZE], int size);
int isDiagonal(int matrix[][MAX_SIZE], int size);

int takeInput(int inputMatrix[][MAX_SIZE]);

int main() {
	int matrix[MAX_SIZE][MAX_SIZE];
	int matrixSize = takeInput(matrix);

	if (isDiagonal(matrix, matrixSize)) {
		printf("The matrix is diagonal.\n");
	}
	else {
		printf("The matrix is NOT diagonal.\n");
	}

	if (isUpperTriangular(matrix, matrixSize)) {
		printf("The matrix is upper triangular.\n");
	}
	else {
		printf("The matrix is NOT upper triangular.\n");
	}

	if (isLowerTriangular(matrix, matrixSize)) {
		printf("The matrix is lower triangular.\n");
	}
	else {
		printf("The matrix is NOT lower triangular.\n");
	}

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

// TO BE COMPLETED BY YOU :)

int isUpperTriangular(int matrix[][MAX_SIZE], int size) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = i; j < size; j++) {
			if (matrix[i][j] == 0)
				return 0;
		}
		for (j = 0; j < i; j++) {
			if (matrix[i][j] != 0)
				return 0;
		}
	}
	return 1;
}

int isLowerTriangular(int matrix[][MAX_SIZE], int size) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < i + 1; j++) {
			if (matrix[i][j] == 0)
				return 0;
		}
		for (j = i + 1; j < size; j++) {
			if (matrix[i][j] != 0)
				return 0;
		}
	}
	return 1;
}

int isDiagonal(int matrix[][MAX_SIZE], int size) {
	int i, j;
	for (i = 0; i < size; i++) {
		if (matrix[i][i] == 0)
			return 0;
		for (j = i + 1; j < size; j++) {
			if (matrix[i][j] != 0)
				return 0;
		}
		for (j = 0; j < i; j++) {
			if (matrix[i][j] != 0)
				return 0;
		}
	}
	return 1;
}
