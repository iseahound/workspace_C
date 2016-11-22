void displaySquare(int side, char fillCharacter);
#include <stdio.h>

int main()
{
	char c1;
	int c2;

	printf("Please enter the character: ");
	scanf("%c", &c1);

	printf("Please enter the side of the square: ");
	scanf("%i", &c2);
    displaySquare(c2,c1);
    return 0;
}

void displaySquare(int side, char fillCharacter){
	int i;
	int j;
	printf("\n");
	for(i = 0; i < side; i++){
		for(j = 0; j < side; j++){
			printf("%c", fillCharacter);
		}
		printf("\n");
	}
	return;
}
