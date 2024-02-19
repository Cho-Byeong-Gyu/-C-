/*
제목: 자료형 예제 5-2
날짜: 2024.02.19
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double num1, num2;

	printf("소수를 입력해주세요: ");
	scanf("%lf", &num1);
	printf("\n");

	printf("소수를 한개 더 입력해주세요: ");
	scanf("%lf", &num2);
	printf("\n");

	printf("%f + %f = %f \n", num1, num2, num1+num2);
	printf("%f - %f = %f \n", num1, num2, num1-num2);
	printf("%f * %f = %f \n", num1, num2, num1*num2);
	printf("%f / %f = %f \n", num1, num2, num1/num2);

	return 0;
}