/*
����: ���� ���α׷��� 10-3
��¥: 2024.02.28.��
����: �ΰ��� ������ �Է¹޾� �� ������ �ִ� ������� ����ϱ�
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int NumCompareMini(int num1, int num2) {			// ���� �� ���� �� ����ϴ� �Լ�(�ݺ��� ������ Ƚ���� ���)
	if (num1 > num2) {
		return num1;
	}
	else {
		return num2;
	}
}

int main() {

	int num1, num2;
	int i = 1;
	int maxI;

	printf("�� ���� ������ �Է����ּ���: ");
	scanf("%d %d", &num1, &num2);
	for (i = 1; i <= NumCompareMini(num1, num2); i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			maxI = i;
		}
	}
	printf("�� ������ �ִ� ������� %d�Դϴ�. \n", maxI);

	return 0;
}
