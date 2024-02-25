/*
제목: 반복문 예제 8-2
날짜: 202402.25.일
내용: if~else를 통해 if문이 모두 실행되어 발생하는 비효율성을 잡아내기
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;
	double num1, num2;
	double result=0;

	printf("두수를 입력해주세요: ");
	scanf(" %lf %lf", &num1, &num2);
	printf("%lf %lf", num1, num2);
	printf("\n");

	printf("계산하고싶은 사칙연산의 번호를 입력해주세요: \n");
	printf("1. 덧셈  2. 뺼셈  3.곱셈  4.나눗셈 \n");
	scanf("%d", &num);
	printf("\n");
	
	if(num == 1) {
		result = num1 + num2;
	}else if (num == 2) {
		result = num1 - num2;
	}else if (num == 3) {
		result = num1 * num2;
	}else {
		result = num1 / num2;
	}
	printf("사칙연산 결과값: %lf", result);

	return 0;
}