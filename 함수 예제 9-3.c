/*
����: �Լ� ���� 9-3
��¥: 2024.02.25.��
����: �Լ� ���� �� ȣ�� ��������
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Add(int num1, int num2) {					// ���� ������ִ� �Լ� (��������O, ��ȯ��O)
	return num1 + num2;
}

void ShowAddResult(int num){					// ��������� ������ִ� �Լ� (��������O, ��ȯ��X)
	printf("������� ���: %d \n", num);
}

int ReadNum(void) {								// ���������� ������ �Է¹޴� �Լ� ( ��������X, ��ȯ��O)
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void) {					// �ȳ����� ��� �Լ� ( ��������Xm ��ȯ��X)
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("�� �� �� ������ �Է����ּ���: ");
}

int main() {

	int num1, num2;
	int result;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();

	result = Add(num1, num2);
	ShowAddResult(result);

	return 0;
}