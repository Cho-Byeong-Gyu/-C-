/*
제목: 배열 예제 11-7
날짜: 2024.03.08.금
내용: 영단어를 입력받아 char형 배열에 저장후, null값을 건드리지 않고 영단어를 역순으로 출력하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char EngWord[20];
	int i = 0;

	printf("영단어를 입력해주세요: ");
	scanf("%s", EngWord);

	printf("\n");
	printf("역순으로 뒤집힌 영단어: ");

	while (EngWord[i] != '\0') {				// while문을 활용해서 길이 구하기
		i++;
	}

	//	printf("%d", i);							// 길이 값 테스트

	for (int k = i; k >= 0; k--) {
		printf("%c", EngWord[k]);
	}


	return 0;
}

//	printf("%d", strlen(EngWord));							-- for문에서 활용하려하면 에러남
//	for (int i = strlen(EngWord)-1; i >= 0; i--) {
//		printf("%s", EngWord[i]);
//	}