/*
제목: 반복문 예제 7-2 
날짜: 2024.02.24.토
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num, count = 1;

	printf("정수를 입력해주세요: ");
	scanf("%d", &num);

	while (count <= num) {
		printf("%d번째 Hello World!를 출력중입니다! \n", count);
		count++;
	}


	return 0;

}