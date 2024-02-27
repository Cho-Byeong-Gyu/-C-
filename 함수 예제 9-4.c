/*
제목: 함수 예제 9-4
날짜: 2024.02.25.일
내용: 함수 선언과 정의 위치 연습예제 - 두개의 정수를 입력받아 두 수중 절댓값이 큰 수를 출력하기
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int AbsolCompare(int num1, int num2);			// 크기비교를 통해 절댓값이 큰 수를 반환하는 함수
int GetAbsolValue(int num);						// 전달받은 인자의 절댓값을 반환시켜주는 함수

int main() {

	int num1, num2;
	printf("두개의 정수를 입력해주세요: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");

	printf("두수중 절댓값이 큰수는 %d입니다. \n", AbsolCompare(num1, num2));
	return 0;
}

int AbsolCompare(int num1, int num2) {
	if (GetAbsolValue(num1) > GetAbsolValue(num2)) {
		return num1;
	}
	else {
		return num2;
	}// 두개의 크기가 같을경우의 절댓값은 같으니까 뭘 반환하든 상관없음
}

int GetAbsolValue(int num) {
	if (num < 0) {
		return num * (-1);
	}
	else {
		return num;
	}
}