/*
제목: 도전 프로그래밍 10-3
날짜: 2024.02.28.수
내용: 두개의 정수를 입력받아 두 정수의 최대 공약수를 출력하기
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int NumCompareMini(int num1, int num2) {			// 둘중 더 작은 수 출력하는 함수(반복문 돌리는 횟수에 사용)
	if (num1 > num2) {
		return num1;
	}
	else {
		return num2;
	}
}

int main() {

	int num1, num2;
	int i = 1;
	int maxI;

	printf("두 개의 정수를 입력해주세요: ");
	scanf("%d %d", &num1, &num2);
	for (i = 1; i <= NumCompareMini(num1, num2); i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			maxI = i;
		}
	}
	printf("두 정수의 최대 공약수는 %d입니다. \n", maxI);

	return 0;
}
