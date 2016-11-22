/*
 ============================================================================
 Name        : 1.c
 Author      : HELLO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
int derive(int a, int b, int c, int x);

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a1, b1, c1, x0;
	printf("\nEnter coefficient for x2: ");
	scanf("%i", &a1);
	printf("\nEnter coefficient for x: ");
	scanf("%i", &b1);
	printf("\nEnter constant: ");
	scanf("%i", &c1);
	printf("\nYour equation is %ix^2 + ", a1);
	printf("%ix + ", b1);
	printf("%i", c1);
	printf("\nThe derivative is %ix", 2 * a1);
	printf(" + %i", b1);
	printf("\nEnter a value for x: ");
	scanf("%i", &x0);
	derive(a1, b1, c1, x0);



	return EXIT_SUCCESS;
}

int derive(int a, int b, int c, int x) {
    float ans = 0, dans = 0, h1;
	ans = a * x * x + b * x + c;
	dans = 2 * a * x + b;
	h1 = a * (x + 0.1) * (x + 0.1) + b * (x + 0.1) + c;
	printf("dy/dx = %f", dans);
	printf("h = 0.10000, dy/dx = %f ", (h1 - ans) / 0.1);
	printf("diff = %f", (h1 - ans) / 0.1 - dans);
	return 0;
}
