#include <stdio.h>

int fillTheArrayFromFile(char fileName[], int array[]);
int sum(int array[], int startIndex, int endIndex);

int main(void) {
	char fileName[100];
	printf("Please enter the file name: ");
	gets(fileName);

	int array[20];
	int arraySize = fillTheArrayFromFile(fileName, array);

	if (arraySize == -1) { // checking the error condition
		printf("Error in reading the file.\n");
		return 1;
	}

	int result;
	result = sum(array, 0, arraySize - 1);

	printf("the summation of the elements of the array is %d", result);

	return 0;

}

// to be completed by you :)
int fillTheArrayFromFile(char fileName[], int array[]) {
	FILE *fp;

	fp = fopen(fileName, "r");
	if (fp == NULL)
		return -1;

	int size = 0;

	//This advances the pointer of fscanf and discards the first number.
	//My code doesn't need a pre-calculated total.
	int actualSize;
	fscanf(fp, "%i", &actualSize);
	printf("Actual Size: %i\n", actualSize);

	while(1) {
		if (feof(fp))
			break;
		fscanf(fp, "%i", &array[size]);
		//printf("%i \n", array[size]);
		size++;
	}

	if (size == actualSize)  //To verify my count is equal to theirs
		return size;
	else return 0;
}

int sum(int array[], int startIndex, int endIndex) {

	if (startIndex > endIndex)
		return 0;
	else return array[startIndex] + sum(array, startIndex + 1, endIndex);

	/*
	//non recursive function
	int i, total = 0;
	for (i = startIndex; i <= endIndex; i++){
		printf("%i,", array[i]);
		total = total + array[i];
	}
	printf("\n");
	return total;
	*/
}

