
#include <stdio.h>
#include <stdlib.h>

int partialComposition(int count);

int main(void) {
	int input;
	printf("\nPlease enter the distance that the robot will walk: ");
	scanf("%d", &input);
	printf("\nThere are %d ways to walk ", partialComposition(input));
	printf("%d meters with steps of 1 meter, 2 meters, and 3 meters.", input);
	return EXIT_SUCCESS;
}

int branch = 0;

int partialComposition(int count){
	while (count > 0) {
		if (count == 1)
			return 1;
		if (count == 2)
			return 2;
		if (count == 3)
			return 4;
		else
			return partialComposition(count - 3) + partialComposition(count - 2) + partialComposition(count - 1);
	}
	return 0;
}
