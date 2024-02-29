/*
제목: 도전 프로그래밍 10-8
날짜: 2024.02.29.수
내용: 2의 k승을 구하는 프로그램을 재귀함수를 통해 구현하기 - 2의8승은 256이다
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square_2 (int num) {

	static int result = 1;
	static int count = 1;
	
	result = result * 2;

	if (count == num) {
		return result;
	}

	count++;
	return square_2(num);
}

int main() {

	int num;

	printf("정수를 입력해주세요: ");
	scanf("%d", &num);

	printf("2의%d승의 값은 %d입니다.", num, square_2(num));
	return 0;
}