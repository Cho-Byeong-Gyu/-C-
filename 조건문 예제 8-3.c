/*
제목: 조건문 예제 8-3
날짜: 2024.02.25.일
내용: if~else 조건문을 사용하여, 1이상 100이하의 수에서 7의배수와9의 배수를 출력하기 + 7과9의 중복되는 배수는 한번만 출력
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i;

	printf("1~100사이의 수중 7과9의 배수인 숫자들 목록 \n");

	for (i = 1; i <= 100; i++) {
		if (i%7==0 || i%9==0 ) {
			printf("%d \n", i);
		}
	}

	return 0;
}