/*
����: �Լ� ���� 9-6
��¥: 2024.02.27.ȭ
����: static ����Ȱ�� ����- �������� total�� static ���������� ��ü�ϱ�
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int total						//���������� static ���������� ��ü

int AddTotal(int num) {

	static int total;			// �������� ��ü�� - total�̶� ������ return ���� �������ٰ� �ʱ�ȭX
	total += num;
	return total;
}

int main() {
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("�Է�%d: ", i + 1);				// �Է� Ƚ�� ī����
		scanf("%d", &num);
		printf("����: %d \n", AddTotal((num)));		// static ���������� Ȱ���Ͽ� �������� ó�� �����ؼ� ������ ���Ѱ� ���
	}
	return 0;
}