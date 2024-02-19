/*
제목: 자료형 예제 5-1
날짜: 2024.02.19
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	int result;

	printf("X축 좌표를 입력해주세요: ");
	scanf("%d", &x);
	printf("\n");

	printf("Y축 좌표를 입력해주세요: ");
	scanf("%d", &y);
	printf("\n");


	result = x * y;
	printf("x좌표, y좌표가 이루는 직사각형의 넓이는 %d입니다. \n", result);

	return 0;
}