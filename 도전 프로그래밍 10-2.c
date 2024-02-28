/*
제목: 도전 프로그래밍 10-2 
날짜: 2024.02.28.수
내용: 두 수를 입력받아 해당하는 구구단을 출력하는 프로그램을 만들기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GuGuDanOutput(int num1, int num2) {
	printf("%d단 구구단 \n", num1);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d  \n", num1, i, num1*i);
	}

	printf("\n");
	
	printf("%d단 구구단 \n", num2);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d  \n", num2, i, num1+i);
	}
}


int main() {

	int num1, num2;
	int i;

	printf("두 수를 입력해주세요: ");
	scanf("%d %d", &num1, &num2);
	GuGuDanOutput(num1, num2);
	return 0;
}


