/*
����: �迭 ���� 11-4
��¥: 2024.03.08.��
����: ���ڿ��� �迭�� ����� ������ null���ڰ� ���ԵǴ��� �׽�Ʈ�غ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "Good Morning!";
	printf("�迭 str�� ũ��: %d \n", sizeof(str));		// sizeof�� �̿��Ͽ� ���ڿ� ���� ���
	printf("�迭 str�� ũ��: %d \n", strlen(str));		// strlen�� �̿��Ͽ� ���ڿ� ���� ���

	printf("�� ���� ������ ��� %c \n", str[13]);
	printf("�� ���� ������ ��� %d \n", str[13]);

	return 0;
}
