/*
 ============================================================================
 Name        : 2.c
 Author      : HELLO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[256];
	printf("\nEnter your phrase: ");
	scanf("%256[a-zA-Z' ]", str);
	char * pch;
	printf ("Splitting string \"%s\" into tokens:\n",str);
	pch = strtok (str," ,.-");
	while (pch != NULL) {
		//printf ("%s\n",pch);
		char buffer[256];
		strcpy(buffer, pch);
		size_t len = strlen(buffer);
		memmove(buffer, buffer+1, len);
		strncat(buffer, pch, 1);
		strcat(buffer, "ay");
		printf(" %s", buffer);
		pch = strtok (NULL, " ,.-");
	}
	return 0;
}
