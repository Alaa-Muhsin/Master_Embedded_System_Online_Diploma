/*
 ============================================================================
 Name        : Homework2_EX2.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to check Vowel or consonant.
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
	if(!((Character >= 'a' && Character <= 'z') ||(Character >= 'A' && Character <= 'Z')))
	{
		printf("It isn't an alphabet");
	}
	else if (Character == 'A' || Character == 'a'||
			 Character == 'E' || Character == 'e'||
			 Character == 'I' || Character == 'i'||
			 Character == 'O' || Character == 'o'||
			 Character == 'U' || Character == 'u')
	{
		printf("%c is a vowel.",Character);
	}
	else
	{
		printf("%c is a consonant.",Character);
	}


	return 0;
}
