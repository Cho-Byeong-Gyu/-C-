/*
제목: 조건문 예제 8-1 (if조건문)
날짜: 2024.02.25.일
내용: if조건문 활용하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;

	printf("정수를 입력해주세요: ");
	scanf("%d", &num);
	printf("\n");

	if(num<0) 
		printf("입력하신 숫자가 0보다 작습니다. \n");
	
	if(num==0) 
		printf("숫자 0을 입력하셨습니다. \n");
	
	if(num>0) 
		printf("입력하신 숫자가 0보다 큽니다. \n");
	

	return 0;
}