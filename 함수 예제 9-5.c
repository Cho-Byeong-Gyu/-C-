/*
제목: 함수 예제 9-5
날짜: 2024.02.27.화
내용: 지역변수 관련 예제 (지역변수: 해당 함수내에서만 존재 및 접근가능한 변수-local variable)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SimpleFuncOne(void) {
	int num = 10;
	num++;
	printf(("SimpleFuncOne num: %d \n", num));
}

int SimpleFuncTwo(void) {
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);

}

int main(void) {
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \n ", num);
	return 0;
}