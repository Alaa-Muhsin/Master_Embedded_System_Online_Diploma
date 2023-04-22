/*
 ============================================================================
 Name        : Homework2_EX1.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to check whether a number is odd or even.
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int Num;
	setbuf(stdout,NULL);

	/* prints Enter an Integer Number */
	printf("Enter an Integer Number :");

	/* get an integer from the user */
	scanf("%d",&Num);

	if(Num == 0 )
	{
		printf("The Number is not even or odd.");
	}
	else if((Num % 2)==0)
	{
		printf("%d is an even number.",Num);
	}
	else
	{
		printf("%d is an odd number.",Num);
	}

	/* Another Solution */
	/*
	if(Num == 0 )
	{
		printf("The Number is not even or odd.");
	}
	else if(Num & 0x01)
	{
		printf("%d is an odd number.",Num);
	}
	else
	{
		printf("%d is an even number.",Num);
	}
	 */
	return 0;
}
