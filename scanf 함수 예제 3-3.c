/*
����: scanf�Լ� ���� 3-3
��¥: 2024.02.18
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	int dou;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	dou = num * num;

	printf("���� ���: %d", dou);
	return 0;
}