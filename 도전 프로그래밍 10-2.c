/*
����: ���� ���α׷��� 10-2 
��¥: 2024.02.28.��
����: �� ���� �Է¹޾� �ش��ϴ� �������� ����ϴ� ���α׷��� �����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GuGuDanOutput(int num1, int num2) {
	printf("%d�� ������ \n", num1);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d  \n", num1, i, num1*i);
	}

	printf("\n");
	
	printf("%d�� ������ \n", num2);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d  \n", num2, i, num1+i);
	}
}


int main() {

	int num1, num2;
	int i;

	printf("�� ���� �Է����ּ���: ");
	scanf("%d %d", &num1, &num2);
	GuGuDanOutput(num1, num2);
	return 0;
}


