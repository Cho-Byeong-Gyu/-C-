/*
����: �ݺ��� ���� 7-6
��¥: 2024.02.24.��
����: ��� ������ �Է¹����� ����, �� ����ŭ�� �������� ����� ���ϱ�+ ��հ� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int input;
	int count = 1;
	int total = 0;
	int avg, num;

	printf("�Է��� ������ ������ �Է����ּ���: ");
	scanf("%d", &input);
	printf("\n");

	while (count <= input) {
		printf("������ �Է����ּ���: ");
		scanf("$d", &num);
		printf("\n");
	

		total = total + num;
		printf("total = %d", total);
		printf("\n");
		printf("\n");

		count++;
	}
	avg = total / input;
	printf("���: %f", (double)avg);

}