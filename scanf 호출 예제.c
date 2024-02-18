/*
제목: scanf함수 호출 예제
날짜: 2024.02.18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2;
	int result;
	
	printf("정수 one: ");
	scanf("%d", &num1);		// num1에 정수입력

	printf("정수 two: ");
	scanf("%d", &num2);		// num2애 정수입력

	result = num1 + num2;
	printf("%d + %d = %d",num1, num2,result);
	return 0;


}