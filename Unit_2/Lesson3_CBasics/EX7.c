/*
 ============================================================================
 Name        : EX7.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int Num1 , Num2;

	setbuf(stdout,NULL);

	/* get two  numbers from the user */
	printf("Enter Value of a:");
	scanf("%d",&Num1);
	printf("Enter Value of b:");
	scanf("%d",&Num2);

	/*Swap the numbers */
	/*
	 Num1=Num1+Num2;
	 Num2=Num1-Num2;
	 Num1=Num1-Num2;
	 */

	/*Another Solution*/
	Num1=Num1^Num2;
	Num2=Num1^Num2;
	Num1=Num1^Num2;

	/* prints the numbers after Swapping */
	printf("After Swapping, value of a :%d\n",Num1);
	printf("After Swapping, value of b :%d\n",Num2);

	return 0;
}
