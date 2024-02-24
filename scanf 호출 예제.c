/*
제목: scanf함수 호출 예제
날짜: 2024.02.18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2, num3;
	int result;

	printf("정수 2개 입력: ");
	scanf("%d %d", &num1, &num2);		// num1, num2에 정수입력

	printf("정수 1개 입력: ");
	scanf("%d", &num3);		// num3에 정수입력

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d", num1, num2, num3, result);
	return 0;


}
