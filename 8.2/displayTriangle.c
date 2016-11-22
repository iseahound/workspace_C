#include <stdio.h>


void displayTriangle(int side, char fillCharacter);
int main(void) {
	int side;
	char theCharacter;

	printf("Please enter the character: ");
	fflush(stdout);
	scanf("%c", &theCharacter);

	printf("Please enter the side of the triangle: ");
	fflush(stdout);

	scanf("%d", &side);


	displayTriangle(side, theCharacter);

}

// to be completed by you :)
void displayTriangle(int side, char fillCharacter) {
	while (side % 100 > 0){
		int i;
		//printf("\n%i", side % 100);
		printf("\n%c", fillCharacter);
		for (i = side % 100; i < side % 100 + side / 100; i++) {
			//printf("%i", side % 100);
			printf("%c", fillCharacter);
		}
		displayTriangle(side + 99, fillCharacter);
		return;
	}
}
