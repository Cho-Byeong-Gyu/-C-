/*
����: scanf �Լ� ���� 3-5
��¥: 2024.02.18
*/

#define _CRT_RECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int num1;
	int num2;
	int num3;
	int result1;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num1);
	printf("\n");

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num2);
	printf("\n");

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num3);
	printf("\n");

	result1 = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("���� ���: %d", result1);
	return 0;
}