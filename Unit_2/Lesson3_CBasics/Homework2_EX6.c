/*
 ============================================================================
 Name        : Homework2_EX6.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to Calculate sum of natural numbers.
 ============================================================================
 */

#include <stdio.h>


int main(void) {

	int Num,i;
	int Sum=0;
	setbuf(stdout,NULL);

	/* prints Enter the number of numbers */
	printf("Enter an integer :");

	/* get an integer from the user */
	scanf("%d",&Num);

	for(i=1;i<=Num;i++)
	{
		Sum += i;
	}
	printf("Sum = %d",Sum);

	return 0;
}
