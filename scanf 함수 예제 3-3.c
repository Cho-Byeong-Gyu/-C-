/*
제목: scanf함수 예제 3-3
날짜: 2024.02.18
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	int dou;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	dou = num * num;

	printf("제곱 결과: %d", dou);
	return 0;
}