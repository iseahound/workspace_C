#include <stdio.h>
#include <string.h>


void printReverse(char string[], int stringLength);
int main(void) {
	printf("Please enter your string (at most 15 characters): ");
	fflush(stdout);

	char string[16];
	gets(string);

	printReverse(string, strlen(string));

}

// to be completed by you :)
void printReverse(char string[], int stringLength) {
	while (stringLength >= 0) {
		printf("%c", string[stringLength]);
		printReverse(string, stringLength - 1);
		return;
	}
}
