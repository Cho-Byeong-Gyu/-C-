/*
����: ���� ���α׷��� 10-5
��¥: 2024.02.28.��
����: 10���� �Ҽ��� ����ϴ� ���α׷��� ����� (1�� �ۿ� �ȳ������� �Ҽ���)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int i;
	int count = 1;				// �Ҽ��� 1�ιۿ� �ȳ��������

	for (i = 1; count <= 10; i++) {		// 10������ϴ°� for�� Ȱ��
		if (i == 2 || i == 3) {
			printf("%d ", i);
		}
		else if (i % 2 == 0 || i % 3 == 0 ) {	// �Ҽ� �ɷ�����
		}else {
			printf("%d ", i);
			count++;
		}

	}
}