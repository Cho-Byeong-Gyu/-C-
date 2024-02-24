/*
제목: 반복문 예제 7-6
날짜: 2024.02.24.토
내용: 몇개의 정수를 입력받을지 묻고, 그 수만큼의 정수들의 평균을 구하기+ 평균값 계산
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int input;
	int count = 1;
	int total = 0;
	int avg, num;

	printf("입력할 정수의 갯수를 입력해주세요: ");
	scanf("%d", &input);
	printf("\n");

	while (count <= input) {
		printf("정수를 입력해주세요: ");
		scanf("$d", &num);
		printf("\n");
	

		total = total + num;
		printf("total = %d", total);
		printf("\n");
		printf("\n");

		count++;
	}
	avg = total / input;
	printf("평균: %f", (double)avg);

}