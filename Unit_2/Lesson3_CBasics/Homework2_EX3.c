/*
 ============================================================================
 Name        : Homework2_EX3.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to find the largest Number among three numbers.
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int Num1,Num2,Num3;
	setbuf(stdout,NULL);

	/* prints Enter Three integers */
	printf("Enter three integers :");

	/* get a character from the user */
	scanf("%d %d %d",&Num1,&Num2,&Num3);

	if(Num1 > Num2)
	{
		if(Num1>Num3)
		{
			printf("Largest Number = %d",Num1);
		}
		else
		{
			printf("Largest Number = %d",Num3);
		}
	}
	else
	{
		if(Num2>Num3)
		{
			printf("Largest Number = %d",Num2);
		}
		else
		{
			printf("Largest Number = %d",Num3);
		}
	}







	return 0;
}
