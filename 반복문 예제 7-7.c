/*
제목: 반복문 예제 7-7
날짜: 2024.02.24.토
내용: while문 중첩, 구구단 2단부터 9단까지 반복
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int num = 2;
	int count = 1;

	while (num <= 9) {

		while (count <= 9) {

			printf("%d * %d = %d \n", num, count, num * count);
			count++;

		}
		printf("\n");

		count = 1;
		num++;
	}

	return 0;
}