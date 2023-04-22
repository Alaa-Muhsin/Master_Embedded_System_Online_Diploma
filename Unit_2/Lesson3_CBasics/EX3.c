/*
 ============================================================================
 Name        : EX3.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to Add Two Integers.
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int Num1 , Num2, Sum=0;
	setbuf(stdout,NULL);

	/* prints Enter two Integer */
	printf("Enter two Integers :");

	/* get two integers from the user */
	scanf("%d %d",&Num1,&Num2);

	Sum = Num1 + Num2;
	/* prints Sum : The Sum of the two integers */
	printf("Sum : %d\n",Sum);

	return 0;
}
