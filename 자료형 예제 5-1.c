/*
����: �ڷ��� ���� 5-1
��¥: 2024.02.19
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	int result;

	printf("X�� ��ǥ�� �Է����ּ���: ");
	scanf("%d", &x);
	printf("\n");

	printf("Y�� ��ǥ�� �Է����ּ���: ");
	scanf("%d", &y);
	printf("\n");


	result = x * y;
	printf("x��ǥ, y��ǥ�� �̷�� ���簢���� ���̴� %d�Դϴ�. \n", result);

	return 0;
}