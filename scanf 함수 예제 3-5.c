/*
제목: scanf 함수 예제 3-5
날짜: 2024.02.18
*/

#define _CRT_RECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int num1;
	int num2;
	int num3;
	int result1;

	printf("정수를 입력하시오: ");
	scanf("%d", &num1);
	printf("\n");

	printf("정수를 입력하시오: ");
	scanf("%d", &num2);
	printf("\n");

	printf("정수를 입력하시오: ");
	scanf("%d", &num3);
	printf("\n");

	result1 = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("연산 결과: %d", result1);
	return 0;
}