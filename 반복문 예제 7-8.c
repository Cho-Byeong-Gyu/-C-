/*
����: �ݺ��� ���� 7-8
��¥: 2024.02.24.��
����: do~while�� �ݺ��� ����, 0�̻� 100������ �������� ¦���� ��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num=0;
	int total = 0;

	do {
		num = num + 2;

		total = total + num;

	} while (num < 100);

	printf("0���� 100������ ¦����: %d \n", total);
	
	return 0;
}