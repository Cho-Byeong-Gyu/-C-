/*
����: �ڷ��� ���� 5-2
��¥: 2024.02.19
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double num1, num2;

	printf("�Ҽ��� �Է����ּ���: ");
	scanf("%lf", &num1);
	printf("\n");

	printf("�Ҽ��� �Ѱ� �� �Է����ּ���: ");
	scanf("%lf", &num2);
	printf("\n");

	printf("%f + %f = %f \n", num1, num2, num1+num2);
	printf("%f - %f = %f \n", num1, num2, num1-num2);
	printf("%f * %f = %f \n", num1, num2, num1*num2);
	printf("%f / %f = %f \n", num1, num2, num1/num2);

	return 0;
}