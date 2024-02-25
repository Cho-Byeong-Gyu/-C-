/*
제목: 조건문 예제 8-5
날짜: 2024.02.25.일
내용: switch문을 활용해 case에 따라 숫자별로 영어로 결과값 출력하기
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;
	printf("1이상 5이하의 정수를 입력하시오: ");
	scanf("%d", &num);
	printf("\n");

	switch (num)
	{
		case 1:
			printf("1은 one \n");
			break;
		case 2: 
			printf("2는 two \n");
			break;
		case 3:
			printf("3은 three \n");
			break;
		case 4:
			printf("4는 four \n");
			break;
		case 5:
			printf("5는 five \n");
			break;
	}
	return 0;

}