/*
제목: scanf 함수 예제3-2
날짜: 2024.02.18
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2, num3;
	int result;

	printf("정수를 입력해주세요: ");
	scanf("%d", &num1);
	printf("\n");

	printf("정수를 입력해주세요: ");
	scanf("%d", &num2);
	printf("\n");
	
	printf("정수를 입력해주세요: ");
	scanf("%d", &num3);
	printf("\n");
	
	result = num1 * num2 + num3;
	printf("%d * %d + %d = %d", num1, num2, num3, result);
	return 0;
}