/*
����: �ڷᱸ�� ����3
��¥: 2024.03.29.��
����: unpacked, unsorted
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[100], B[100];					// B�迭�� ������ ����ִ��� �����ִ��� üũ�ϱ� ���� �迭
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
			if (B[m] == 1) {		// ���� üŷ�Ǿ��ִ����� Ȯ��
				return 1;
			}
			else {
				return -1;
			}
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
	int i, j;
	if (l = r) {
		B[l] = 1;
	}
	else if (l == -1) {						// ���������� ���� ���̽�
		i = r;
		while (B[i] == 1 && i < S)
			i++;
		if (i == S) {
			for (j = S - 1; j >= r; j--) {
				A[j + 1] = A[j]; B[j + 1] = B[j];				// ������ �޺κ��� ���������� �о�� 
			}
			A[r] = x; B[r] = 1;
			S++;
		}
		else {
			for (j = i - 1; j >= r; j--) {
				A[j + 1] = A[j]; B[j + 1] = B[j];				// ������ �޺κ��� ���������� �о�� 
			}
			A[r] = x; B[r] = 1;
			S++;
		}
	}
	else if (r == S) {						// �������� ���ʺκ����� ���� ���̽�
		i = l;
		while (B[i] == 1 && i >= 0) {
			i--;
		}
		if (i == -1) {
			A[S] = x; B[S] = 1; 
			S++;
		}
		else {
			for (j = i; j < r; j++) {
				A[j] = A[j + 1]; B[j] = B[j + 1];
			}
			A[r - 1] = x; 
			B[r - 1] = 1;
			S++;
		}
	}
	else {								// ���ʺκ� case
		i = l;
		while (B[i] == 1 && i >= 0) {
			i--;
		}
		if (i != -1) {					// ���ڸ��� �ְ�, �������̽����� i�� ������ ����Ű�ϱ� �������� ����
			for (j = i; j < l; j++) {
				A[j] = A[j + 1]; B[j] = B[j + 1];
			}
			A[l] = x; B[l] = 1;
			S++;
		}
		else {							// �����ʺκ� case
			i = r;
			while (B[i] == 1 && i < S) {
				i++;
			}
			if (i != S) {				// �߰��� ���ڸ��� ����, ���������� ���� ã��
				for (j = i - 1; j >= r; j--) {
					A[j + 1] = A[j]; B[j + 1] = B[j];
				}
				A[r] = x; B[r] = 1;
			}
			else {
				for (j = S - 1; j >= r; j--) {
					A[j + 1] = A[j]; B[j + 1] = B[j];
				}
				A[r] = x; B[r] = 1;
			}
			S++;
		}

	}
}

void delt(int l) {					// ���ڿ��� ���������ִ� �Լ�

	B[l] = 0;
}


int main(void) {

	char c;

	while (1) {								// ���� �ݺ������� ����
		printf("S = %d \n", S);				// ���� S���� ���
		for (int i = 0; i < S; i++) {		// ���� �迭���� ���
			printf("%d  ", A[i]);
		}
		printf("\n");
		for (int k = 0; k < S; k++) {		// ���� ��ŷ�ϴ� �迭 üũ���� ���
			printf("%d  ", B[k]);
		}
		printf("\n");

		scanf("%c", &c);					// ���� �Է¹ޱ�

		if (c == 's') {
			printf("ã�� ���� ���� �Է����ּ���: ");
			scanf("%d", &x);					// ���� �Է¹ޱ�
			printf("\n");

			search(x);

			if (search(x) == -1 && l != r) {
				printf("%d�� ã�� �� �����ϴ�. \n %d~%d���̿� �����մϴ�. \n", x, l, r);
			}
			else if (search(x) == -1 && l == r) {
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
		}


	}
	return 0;
}