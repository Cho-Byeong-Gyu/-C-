/*
����: �Լ� ���� 9-4
��¥: 2024.02.25.��
����: �Լ� ����� ���� ��ġ �������� - �ΰ��� ������ �Է¹޾� �� ���� ������ ū ���� ����ϱ�
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int AbsolCompare(int num1, int num2);			// ũ��񱳸� ���� ������ ū ���� ��ȯ�ϴ� �Լ�
int GetAbsolValue(int num);						// ���޹��� ������ ������ ��ȯ�����ִ� �Լ�

int main() {

	int num1, num2;
	printf("�ΰ��� ������ �Է����ּ���: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");

	printf("�μ��� ������ ū���� %d�Դϴ�. \n", AbsolCompare(num1, num2));
	return 0;
}

int AbsolCompare(int num1, int num2) {
	if (GetAbsolValue(num1) > GetAbsolValue(num2)) {
		return num1;
	}
	else {
		return num2;
	}// �ΰ��� ũ�Ⱑ ��������� ������ �����ϱ� �� ��ȯ�ϵ� �������
}

int GetAbsolValue(int num) {
	if (num < 0) {
		return num * (-1);
	}
	else {
		return num;
	}
}