/*
제목: scanf함수 예제 3-3
날짜: 2024.02.18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1;
	int num2;

	int result1;
	int result2;

	printf("정수를 입력하시오: ");
	scanf("%d", &num1);

	printf("정수를 입력하시오: ");
	scanf("%d", &num2);

	result1 = num1 / num2;
	result2 = num1 % num2;

	printf("몫: %d \n", result1);
	printf("나머지: %d \n", result2);

}
