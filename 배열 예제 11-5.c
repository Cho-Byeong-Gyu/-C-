/*
제목: 배열 예제 11-5
날짜: 2024.03.08.금
내용: scanf를 활용하여 문자열 입력받기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str[50];
	int idx = 0;

	printf("문자열을 입력해주세요: ");
	scanf(" %s", str);					// 배열앞에는 scanf호출시 &안 붙임
	
	printf("\n");
	printf("입력받은 문자열 : %s \n", str);

	printf("입력받은 문자열 단위 출력: ");
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}

	return 0;
}