/*
����: �ݺ��� ���� 7-9
��¥; 2024.02.24.��
����: for�� ����, 0���� n ������ ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i, num;
	int total = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("\n");

	for (i = 0; i <= num; i++) {
		total = total + i;
	}

	printf("�Է��� ���������� ����: %d", total);

	return 0;
}