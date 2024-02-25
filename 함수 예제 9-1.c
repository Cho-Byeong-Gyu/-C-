/*
제목: 함수 예제 9-1
날짜: 2024.02.25.일
내용: printf함수의 반환값 알아보기
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int num1, num2;
	num1 = printf("12345 \n");
	num2 = printf("I love my home \n");
	printf("%d %d \n", num1, num2);
	
	return 0;

}