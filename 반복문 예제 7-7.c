/*
����: �ݺ��� ���� 7-7
��¥: 2024.02.24.��
����: while�� ��ø, ������ 2�ܺ��� 9�ܱ��� �ݺ�
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int num = 2;
	int count = 1;

	while (num <= 9) {

		while (count <= 9) {

			printf("%d * %d = %d \n", num, count, num * count);
			count++;

		}
		printf("\n");

		count = 1;
		num++;
	}

	return 0;
}