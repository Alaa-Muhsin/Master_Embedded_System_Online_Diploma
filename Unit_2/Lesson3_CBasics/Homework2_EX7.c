/*
 ============================================================================
 Name        : Homework2_EX7.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to find factorial of a number.
 ============================================================================
 */

#include <stdio.h>


int main(void) {

	int Num,i;
	int Fact=1;
	setbuf(stdout,NULL);

	/* prints Enter an integer  */
	printf("Enter an integer :");

	/* get an integer from the user */
	scanf("%d",&Num);

	if(Num < 0)
	{
		printf("Error!!! Factorial of negative numbers doesn't exist.");
	}
	else
	{
		for(i=1;i<=Num;i++)
		{
			Fact *= i;
		}
		printf("Factorial = %d",Fact);
	}

	return 0;
}
