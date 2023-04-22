/*
 ============================================================================
 Name        : EX6.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write Source Code to Swap Two Numbers.
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	float Num1 , Num2, Temp;

	setbuf(stdout,NULL);

	/* get two float numbers from the user */
	printf("Enter Value of a:");
	scanf("%f",&Num1);
	printf("Enter Value of b:");
	scanf("%f",&Num2);

	/*Swap the numbers */
	Temp = Num1;
	Num1=Num2;
	Num2=Temp;

	/* prints the numbers after Swapping */
	printf("After Swapping, value of a :%.2f\n",Num1);
	printf("After Swapping, value of b :%.2f\n",Num2);

	return 0;
}
