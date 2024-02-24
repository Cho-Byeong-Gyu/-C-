/*
제목: 반복문 예제 7-4
날짜: 2024.02.24.토
문제: 정수를 계속입력받으며 그값들을 더해나가며 사용자가 0을 입력하는 순간 그떄까지의 합을 출력하고 프로그램을 종료시키기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num=1;
	int total = 0;

	if (num!=0) {
		while (1) {							// 1은 참을 의미하므로 무한루프임
			printf("값을 입력해주세요: ");
			scanf("%d", &num);
			printf("\n");

			total = total + num;

			printf("현재까지 총합: %d \n \n", total);
		}
	}
	else {
		return 0;

	}

}
