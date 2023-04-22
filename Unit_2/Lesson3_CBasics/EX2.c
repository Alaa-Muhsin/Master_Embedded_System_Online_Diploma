/*
 ============================================================================
 Name        : EX2.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to Print an integer entered by a User.
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int Num;
	setbuf(stdout,NULL);

	/* prints Enter an Integer */
	printf("Enter an Integer :");

	/* get an integer from the user */
	scanf("%d",&Num);

	/* prints You entered : Num  */
	printf("You entered : %d\n",Num);

	return 0;
}
