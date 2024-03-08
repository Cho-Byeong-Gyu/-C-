/*
제목: 배열 예제 11-4
날짜: 2024.03.08.금
내용: 문자열을 배열에 저장시 실제로 null문자가 삽입되는지 테스트해보기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "Good Morning!";
	printf("배열 str의 크기: %d \n", sizeof(str));		// sizeof를 이용하여 문자열 길이 출력
	printf("배열 str의 크기: %d \n", strlen(str));		// strlen을 이용하여 문자열 길이 출력

	printf("널 문자 문자형 출력 %c \n", str[13]);
	printf("널 문자 정수형 출력 %d \n", str[13]);

	return 0;
}
