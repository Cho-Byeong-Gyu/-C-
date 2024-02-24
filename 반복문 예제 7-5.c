/*
제목: 반복문 예제 7-5
날짜: 2024.02.24.토
내용: 역순으로 구구단 출력하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;
	int count = 9;

	printf(" 숫자를 입력해주세요: ");
	scanf("%d", &num);
	printf("\n");

	while (count >= 1) {
		printf("%d * %d = %d ", num, count, num * count);
		printf("\n");
		count--;
	}
	return 0;
}