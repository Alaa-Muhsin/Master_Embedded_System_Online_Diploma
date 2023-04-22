/*
 ============================================================================
 Name        : EX5.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to Find ASCII Value of a Character.
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	char Character;

	setbuf(stdout,NULL);

	/* prints Enter a character : */
	printf("Enter a character :");

	/* get a character from the user */
	scanf("%c",&Character);

	/* ASCII Value of "The Character " : "The ASCII Value" */
	printf("ASCII Value of %c = %d\n",Character,Character);

	return 0;
}
