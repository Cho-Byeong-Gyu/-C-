/*
����: �ڷᱸ�� ����1
��¥: 2024.03.26.ȭ
����: packed, unsorted
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[100];
int S;
int x;
int idx;							// ���ڿ��� ��ġ�� ǥ������ ���� ����

int search(int x) {					// ���ڿ��� �˻����ִ� �Լ�
	int i;
	for (i = 0; i < S; i++) {
		if (A[i] == x) {				// ���ڿ��� ã������ �ݺ��� Ż��
			break;
		}
	}
	if (i == S) {					// ���ڿ��� ã�� ���ϸ� search�Լ� ��ȯ���� -1�� ����
		return -1;
	}
	else {
		idx = i;					// idx�� �ε��� ������ ���ϰ� 1�� �Լ� ��ȯ�� ����
		return 1;
	}
}

void insert(int x) {					// ���ڿ��� ���Խ����ִ� �Լ�
	A[S] = x;
	S++;
}

void delt(int idx) {					// ���ڿ��� ���������ִ� �Լ�

	A[idx] = A[S - 1];
	S--;
}


int main(void) {

	char c;

	while (1) {								// ���� �ݺ������� ����
		printf("S = %d \n", S);				// ���� S���� ���
		for (int i = 0; i < S; i++) {		// ���� �迭���� ���
			printf("%d  ", A[i]);
		}
		printf("\n");

		scanf("%c", &c);					// ���� �Է¹ޱ�

		if (c == 's') {
			printf("ã�� ���� ���� �Է����ּ���: ");
			scanf("%d", &x);					// ���� �Է¹ޱ�
			printf("\n");

			search(x);

			if (search(x) == -1) {
				printf("%d�� ã�� �� �����ϴ�. \n", x);
			}
			else {
				printf("%d�� %d��°�� ��ġ���ֽ��ϴ�.\n", x, idx + 1);
			}
		}
		else if (c == 'i') {
			printf("�����ϰ� ���� ���� �Է����ּ���: ");
			scanf("%d", &x);					// ���� �Է¹ޱ�

			if (search(x) == 1) {
				printf("�̹� �ش� ���� �����մϴ� \n");
			}
			else {
				insert(x);
			}
		}
		else if (c == 'd') {
			printf("�����ϰ� ���� ���� �Է����ּ���: ");
			scanf("%d", &x);					// ���� �Է¹ޱ�
			printf("\n");

			if (search(x) == 1) {
				delt(idx);
			}
			else {
				printf("�ش� ���� ���������ʾ� ������ �� �����ϴ�. \n");
			}
		}
		else if (c == 'q') {
			printf("������~ \n");
			break;
		}
		else {
			printf("\n");
		}
	}
	return 0;
}