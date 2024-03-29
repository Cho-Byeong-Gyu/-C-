/*
����: �ڷᱸ�� ����2
��¥: 2024.03.26.ȭ
����: packed, sorted
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[100];
int S;
int x;
int l, r;							// ���ڿ��� ��ġ�� ǥ������ ���� ����

int search(int x) {					// ���ڿ��� �˻����ִ� �Լ� + ���̳ʸ� ��ġ Ȱ��
	int s, e, m;
	s = 0;
	e = S - 1;

	while (s <= e) {
		m = (s + e) / 2;			// ���̳ʸ� ��ġ �߰��� �������ֱ�
		if (A[m] == x) {
			l = r = m;
			return 1;				// ã�Ҵٴ� �� 1�� ��ȯ
		}
		else if (A[m] > x) {
			e = m - 1;				// ã�°��� �� �����̶�� ���̴ϱ� �������� ������ ���� �߰�����-1�� �ű��
		}
		else {						// ã�°��� �� �������̶�� ���̴ϱ� �������� ���� ���� �߰�����+1�� �ű��
			s = m + 1;
		}

	}
	l = e; r = s;					// �ݺ����� ���Ե��� �ʴ� ���̽��� l�� r�� �����ϴϱ� �ݴ�� ����
	return -1;
}

void insert(int x) {					// ���ڿ��� ���Խ����ִ� �Լ�
	int i;
	for (i = S - 1; i >= r; i--) {
		A[i + 1] = A[i];					// r ���� �迭�� �ڷ� ��ĭ �� �б�
	}
	A[r] = x;							// r��°�� �� ���� �����ֱ�
	S++;
}

void delt(int l) {					// ���ڿ��� ���������ִ� �Լ�

	int j;
	for (int j = l; j < S - 1; j++) {
		A[j] = A[j + 1];
	}									// l ���� �迭 ������ ��ĭ�� �����
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
				printf("%d�� ã�� �� �����ϴ�. \n %d~%d���̿� �����մϴ�. \n", x, l, r);
			}
			else {
				printf("%d�� %d��°�� ��ġ���ֽ��ϴ�.\n", x, r + 1);
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
				delt(l);
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