/*
����: �ݺ��� ���� 7-5
��¥: 2024.02.24.��
����: �������� ������ ����ϱ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;
	int count = 9;

	printf(" ���ڸ� �Է����ּ���: ");
	scanf("%d", &num);
	printf("\n");

	while (count >= 1) {
		printf("%d * %d = %d ", num, count, num * count);
		printf("\n");
		count--;
	}
	return 0;
}