/*
����: scanf �Լ� ����3-2
��¥: 2024.02.18
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2, num3;
	int result;

	printf("������ �Է����ּ���: ");
	scanf("%d", &num1);
	printf("\n");

	printf("������ �Է����ּ���: ");
	scanf("%d", &num2);
	printf("\n");
	
	printf("������ �Է����ּ���: ");
	scanf("%d", &num3);
	printf("\n");
	
	result = num1 * num2 + num3;
	printf("%d * %d + %d = %d", num1, num2, num3, result);
	return 0;
}