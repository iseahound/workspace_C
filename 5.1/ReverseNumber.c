/*
 ============================================================================
 Name        : 1.c
 Author      : HELLO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
int reverse(int number);

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n1;
	printf("Enter your number: ");
	scanf("%i", &n1);
	printf("\n");
    reverse(n1);
	return EXIT_SUCCESS;
}

int reverse(int number) {
	int rev = 0;
	int n = number;
	while (n != 0)
	{
		rev *= 10;
		rev += n%10;
		n = n/10;
	}
	printf("%i", rev);
	return rev;
}
