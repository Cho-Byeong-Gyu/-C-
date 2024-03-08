/*
제목: 배열 예제 11-6
날짜: 2024.03.08.금
내용: 문자열을 입력받아 입력받은 문자열의 길이를 출력하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str[20];

	printf("문자열을 입력해주세요: ");
	scanf("%s", str);

	printf("입력하신 문자열의 길이는 %d입니다. ", strlen(str));
}