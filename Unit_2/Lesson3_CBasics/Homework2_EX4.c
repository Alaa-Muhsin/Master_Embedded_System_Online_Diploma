/*
 ============================================================================
 Name        : Homework2_EX4.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to check whether the number is Positive or Negative.
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
		printf("You Entered Zero.");
	}
	else if(Num > 0)
	{
		printf("%d is a positive number.",Num);
	}
	else
	{
		printf("%d is a negative number.",Num);
	}

	/* Another Solution */
	/*
		if(Num == 0 )
		{
			printf("You Entered Zero.");
		}
		else if(Num & (1<<((sizeof(Num) * 8)-1)))
		{
			printf("%d is a negative number.",Num);
		}
		else
		{
			printf("%d is a positive number.",Num);
		}
	 */
	return 0;
}
