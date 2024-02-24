/*
제목: 반복문 예제 7-3
날짜: 2024.02.24.토
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int num;
	int dou = 1;

	printf("양의 정수를 한개 입력해주세요: ");
	scanf("%d", &num);

	printf("%d번까지의 3의 배수: ", num);
	while (dou <= num) {
		printf(" %d", 3 * dou );
		dou++;
	}


	return 0;
}