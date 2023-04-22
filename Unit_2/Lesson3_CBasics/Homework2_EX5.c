/*
 ============================================================================
 Name        : Homework2_EX5.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to check whether a character is alphabet or not.
 ============================================================================
 */

#include <stdio.h>


int main(void) {

	char Character;
		setbuf(stdout,NULL);

			/* prints Enter a character */
			printf("Enter a character :");

			/* get a character from the user */
			scanf("%c",&Character);
	if(((Character >= 'a' && Character <= 'z') ||(Character >= 'A' && Character <= 'Z')))
	{
		printf("%c is an alphabet",Character);
	}
	else
	{
		printf("%c is not an alphabet",Character);
	}


	return 0;
}
