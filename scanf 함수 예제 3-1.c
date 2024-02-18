/*
제목: scanf 함수 예제3-1
날짜: 2024.02.18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2;
	int result1;
	int result2;

	printf("정수를 입력하시오: ");
	scanf("%d", &num1);

	printf("\n");
	printf("정수를 입력하시오: ");
	scanf("%d", &num2);

	result1 = num1 - num2;
	result2 = num1 * num2;

	printf("%d - %d = % d \n", num1, num2, result1);
	printf("%d x %d = % d \n", num1, num2, result2);
	return 0;
}