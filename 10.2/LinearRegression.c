#include <stdio.h>
#include <stdlib.h>

#define MAX_DATA_SIZE 20

int fillTheArrays(char fileName[], int x[], double y[]);
double get_average_x(int x[], int size);
double get_average_y(double y[], int size);
double calculate_slope(int x[], double x_average, double y[], double y_average, int size);
double calculate_intercept(double x_average, double y_average, double slope);
double calculate_r2(int x[], double y[], int size, double y_average, double slope, double intercept);

int main(){
	int x[MAX_DATA_SIZE];
	double y[MAX_DATA_SIZE];

	char fileName[100];
	printf("Please enter the file name: ");
	gets(fileName);
	// STEP 1: READING THE FILE AND FILLING THE ARRAYS x AND y
	int data_size = fillTheArrays(fileName, x, y);
	if (data_size == -1) {
		printf("Error in reading the file.\n");
		fflush(stdout);
		return 1;
	}
	// STEP 2: GETTING THE AVERAGE OF x VALUES AND y VALUES
	double x_average = get_average_x(x, data_size);
	double y_average = get_average_y(y, data_size);
	// STEP 3: CALCULATING THE SLOPE AND INTERCEPT BASED ON THE FORMULA PROVIDED
	double slope = calculate_slope(x, x_average, y, y_average, data_size);
	double intercept = calculate_intercept(x_average, y_average, slope);
	// STEP 4: CALCULATING THE R^2 VALUE
	double r2 = calculate_r2(x, y, data_size, y_average, slope, intercept);
	//	STEP 5: PRINTING THE RESULTS (SLOPE, INTERCEPT AND R^2)
	printf("function obtained by linear regression is 'y = %lf + %lf * x'.\n", intercept, slope);
	printf("value of R^2 is %lf", r2);
	fflush(stdout);

	return 0;
}

int fillTheArrays(char fileName[], int x[], double y[]) {
	FILE *fp;

	fp = fopen(fileName, "r");
	if (fp == NULL)
		return -1;

	int size = 0;

	while(1) {
		if (feof(fp))
			break;
		fscanf(fp, "%i", &x[size]);
		fscanf(fp, "%lf", &y[size]);
		//printf("%i \n", array[size]);
		size++;
	}

	return size;
}
double get_average_x(int x[], int size) {
	double avg = 0;
	int i;
	for (i = 0; i < size; i++)
		avg+=x[i];
	return avg / size;
}

double get_average_y(double y[], int size) {
	double avg = 0;
	int i;
	for (i = 0; i < size; i++)
		avg+=y[i];
	return avg / size;
}

double calculate_slope(int x[], double x_average, double y[], double y_average, int size) {
	double a = 0, b = 0;
	int i;
	for (i = 0; i < size; i++) {
		a += (x[i] - x_average) * (y[i] - y_average);
		b += (x[i] - x_average) * (x[i] - x_average);
	}
	return a / b;
}

double calculate_intercept(double x_average, double y_average, double slope) {
	return y_average - (slope * x_average);
}

double calculate_r2(int x[], double y[], int size, double y_average, double slope, double intercept) {
	double a = 0, b = 0;
	int i;
	for (i = 0; i < size; i++) {
		a += ((intercept + (slope * x[i])) - y_average) * ((intercept + (slope * x[i])) - y_average);
		b += (y[i] - y_average) * (y[i] - y_average);
	}
	return a / b;
}
