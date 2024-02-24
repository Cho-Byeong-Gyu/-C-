/*
제목: 반복문 예제 7-1 (while문)
날짜: 2024.02.24.토
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int num = 1;

	while (num < 7) {		// num이라는 변수가 3보다 작으면 반복
		printf("반복실행중 \n \n" );
		num++;
	}

	return 0;
}