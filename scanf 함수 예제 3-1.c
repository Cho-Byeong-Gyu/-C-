/*
����: scanf �Լ� ����3-1
��¥: 2024.02.18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2;
	int result1;
	int result2;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num1);

	printf("\n");
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num2);

	result1 = num1 - num2;
	result2 = num1 * num2;

	printf("%d - %d = % d \n", num1, num2, result1);
	printf("%d x %d = % d \n", num1, num2, result2);
	return 0;
}