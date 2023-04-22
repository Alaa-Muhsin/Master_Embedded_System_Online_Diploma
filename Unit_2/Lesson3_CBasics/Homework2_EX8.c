/*
 ============================================================================
 Name        : Homework2_EX8.c
 Author      : Alaa Muhsin.
 Created on  : 18 April 2023.
 Description : Write C Program to Make a simple Calculator.
 ============================================================================
 */

#include <stdio.h>


int main(void) {

	float Num1,Num2;
	char operator;
	double Result=0;
	setbuf(stdout,NULL);

	/* prints Enter operator  */
	printf("Enter operator either + or - or * or / :");

	/* get the operator from the user */
	scanf("%c",&operator);

	/* prints Enter two operands  */
	printf("Enter two operands:");

	/* get the operator from the user */
	scanf("%f %f",&Num1 , &Num2);

	switch(operator)
	{
	case '+':
		Result = Num1 + Num2;
		printf("%.2f %c %.2f = %.2lf",Num1,operator,Num2,Result);
		break;
	case '-':
		Result = Num1 - Num2;
		printf("%.2f %c %.2f = %.2lf",Num1,operator,Num2,Result);
		break;
	case '*':
		Result = Num1 * Num2;
		printf("%.2f %c %.2f = %.2lf",Num1,operator,Num2,Result);
		break;
	case '/':
		Result = Num1 / Num2;
		printf("%.2f %c %.2f = %.2lf",Num1,operator,Num2,Result);
		break;
	default :
		printf("Wrong Operator");
	}


	return 0;
}
