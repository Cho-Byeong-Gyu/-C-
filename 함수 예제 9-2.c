/*
제목: 함수 예제 9-2
날짜: 2024.02.25.일
내용: 함수의 정의와 호출 연습예제
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int num1, int num2) {
	return num1 + num2;
}


int main() {

	int result;
	result = Add(3, 4);
	printf("덧셈결과1: %d \n", result);
	result = Add(5, 8);
	printf("덧셈결과2: %d \n", result);
	return 0;

}