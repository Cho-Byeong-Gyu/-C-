/*
제목: 함수 예제 9-7
날짜: 2024.02.27.화
내용: 재귀함수와 관련된 예제-팩토리얼
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main() {
	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("5! = %d \n", Factorial(5));
	printf("7! = %d \n", Factorial(7));
	printf("9! = %d \n", Factorial(9));
	return 0;
}