/*
����: �迭 ���� 11-3
��¥: 2024.03.08.��
����: char�� 1���� �迭�� ����� ���ÿ� "good time"���� �ʱ�ȭ �� ��, ����� ������ ����ϱ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>    // strlen �Լ��� ����� ��� ����

int main() {

	char arr[] = "Good Time";
	int len = strlen(arr);

	for (int i = 0; i < len; i++) {
		printf("%c", arr[i]);
	}

	return 0;
}