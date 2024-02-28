/*
제목: 도전 프로그래밍 10-1
날짜: 2024.02.28.수
내용: 10진수 정수를입력받아 10진수로 출력하는 프로그램을 만들기
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;

	printf("10진수 정수를 입력해주세요: ");
	scanf("%d", &num);
	printf("\n");
	printf("입력하신 정수는 %d입니다 \n", num);
}