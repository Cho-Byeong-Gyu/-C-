/*
����: ���� ���α׷��� 10-8
��¥: 2024.02.29.��
����: 2�� k���� ���ϴ� ���α׷��� ����Լ��� ���� �����ϱ� - 2��8���� 256�̴�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square_2 (int num) {

	static int result = 1;
	static int count = 1;
	
	result = result * 2;

	if (count == num) {
		return result;
	}

	count++;
	return square_2(num);
}

int main() {

	int num;

	printf("������ �Է����ּ���: ");
	scanf("%d", &num);

	printf("2��%d���� ���� %d�Դϴ�.", num, square_2(num));
	return 0;
}