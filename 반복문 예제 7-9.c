/*
제목: 반복문 예제 7-9
날짜; 2024.02.24.토
내용: for문 예제, 0부터 n 까지의 덧셈
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i, num;
	int total = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("\n");

	for (i = 0; i <= num; i++) {
		total = total + i;
	}

	printf("입력한 정수까지의 총합: %d", total);

	return 0;
}