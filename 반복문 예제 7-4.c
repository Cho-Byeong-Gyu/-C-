/*
����: �ݺ��� ���� 7-4
��¥: 2024.02.24.��
����: ������ ����Է¹����� �װ����� ���س����� ����ڰ� 0�� �Է��ϴ� ���� �׋������� ���� ����ϰ� ���α׷��� �����Ű��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num=1;
	int total = 0;

	if (num!=0) {
		while (1) {							// 1�� ���� �ǹ��ϹǷ� ���ѷ�����
			printf("���� �Է����ּ���: ");
			scanf("%d", &num);
			printf("\n");

			total = total + num;

			printf("������� ����: %d \n \n", total);
		}
	}
	else {
		return 0;

	}

}
