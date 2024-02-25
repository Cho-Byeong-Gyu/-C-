/*
제목: 함수 예제 9-3
날짜: 2024.02.25.일
내용: 함수 선언 및 호출 연습예제
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Add(int num1, int num2) {					// 덧셈 계산해주는 함수 (전달인자O, 반환값O)
	return num1 + num2;
}

void ShowAddResult(int num){					// 덧셈결과를 출력해주는 함수 (전달인자O, 반환값X)
	printf("덧셈결과 출력: %d \n", num);
}

int ReadNum(void) {								// 덧셈연산할 정수를 입력받는 함수 ( 전달인자X, 반환값O)
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void) {					// 안내사항 출력 함수 ( 전달인자Xm 반환값X)
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("두 개 의 정수를 입력해주세요: ");
}

int main() {

	int num1, num2;
	int result;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();

	result = Add(num1, num2);
	ShowAddResult(result);

	return 0;
}