/*
제목: 배열 예제 11-3
날짜: 2024.03.08.금
내용: char형 1차원 배열을 선언과 동시에 "good time"으로 초기화 한 후, 저장된 내용을 출력하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>    // strlen 함수가 선언된 헤더 파일

int main() {

	char arr[] = "Good Time";
	int len = strlen(arr);

	for (int i = 0; i < len; i++) {
		printf("%c", arr[i]);
	}

	return 0;
}