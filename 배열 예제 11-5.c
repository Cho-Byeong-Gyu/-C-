/*
����: �迭 ���� 11-5
��¥: 2024.03.08.��
����: scanf�� Ȱ���Ͽ� ���ڿ� �Է¹ޱ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str[50];
	int idx = 0;

	printf("���ڿ��� �Է����ּ���: ");
	scanf(" %s", str);					// �迭�տ��� scanfȣ��� &�� ����
	
	printf("\n");
	printf("�Է¹��� ���ڿ� : %s \n", str);

	printf("�Է¹��� ���ڿ� ���� ���: ");
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}

	return 0;
}