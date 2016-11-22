/*
 ============================================================================
 Name        : 2.c
 Author      : HELLO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
void displayRhombus(int diagonal, char fillCharacter);

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c1;
	int c2;

	printf("Please enter the character: ");
	scanf("%c", &c1);

	printf("Please enter the side of the rhombus: ");
	scanf("%i", &c2);
	if (c2 % 2 == 1)
		displayRhombus(c2,c1);
	else
		printf("Choose an even number please.");
    return 0;
}

void displayRhombus(int diagonal, char fillCharacter){
	int i;
	int j;
	int k;
	int l;
	int m;
	for (i = 0; i < diagonal; i++){
		if (i < (diagonal + 1) / 2){
			for (j = 0; j < (diagonal - 1) / 2 - i; j++)
				printf(" ");
			for (k = 0; k < 2 * i + 1; k++)
				printf("%c",fillCharacter);
		}
		else {
			for (l = 0; l < i - (diagonal + 1) / 2 + 1; l++)
				printf(" ");
			for (m = 0; m < 2 * (diagonal - i) - 1; m++)
				printf("%c",fillCharacter);
		}
		printf("\n");
	}
}
