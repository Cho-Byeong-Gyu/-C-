/*
����: �ݺ��� ���� 7-3
��¥: 2024.02.24.��
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int num;
	int dou = 1;

	printf("���� ������ �Ѱ� �Է����ּ���: ");
	scanf("%d", &num);

	printf("%d�������� 3�� ���: ", num);
	while (dou <= num) {
		printf(" %d", 3 * dou );
		dou++;
	}


	return 0;
}