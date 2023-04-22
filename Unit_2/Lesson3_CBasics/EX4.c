/*
 ============================================================================
 Name        : EX4.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to Multiply two Floating Point Numbers.
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	float Num1 , Num2;
	double Result;
	setbuf(stdout,NULL);

	/* prints Enter two Numbers */
	printf("Enter two Numbers :");

	/* get two float numbers  from the user */
	scanf("%f %f",&Num1,&Num2);

	Result = Num1 * Num2;
	/* prints Product : The Multiplication of the two floating numbers */
	printf("Product : %lf\n",Result);

	return 0;
}
