/*
����: scanf�Լ� ���� 3-3
��¥: 2024.02.18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1;
	int num2;

	int result1;
	int result2;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num1);

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num2);

	result1 = num1 / num2;
	result2 = num1 % num2;

	printf("��: %d \n", result1);
	printf("������: %d \n", result2);




}