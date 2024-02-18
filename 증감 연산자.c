/*
제목: 숫자 증,감 연산자
날짜: 2024.02.18
*/

#include <stdio.h>

int main()
{
	int num1 = 12;
	int num2 = 12;

	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2);
	printf("num2: %d \n\n", num2);

	printf("num1: %d \n", num1);
	printf("num1--: %d \n", num1--);
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("--num2: %d \n", --num2);
	printf("num2: %d \n\n", num2);
	return 0;
}