/*
제목: 반복문 예제 7-8
날짜: 2024.02.24.토
내용: do~while문 반복문 예제, 0이상 100이하의 정수들중 짝수의 합
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num=0;
	int total = 0;

	do {
		num = num + 2;

		total = total + num;

	} while (num < 100);

	printf("0부터 100까지의 짝수합: %d \n", total);
	
	return 0;
}