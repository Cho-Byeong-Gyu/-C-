/*
����: �迭 ���� 11-7
��¥: 2024.03.08.��
����: ���ܾ �Է¹޾� char�� �迭�� ������, null���� �ǵ帮�� �ʰ� ���ܾ �������� ����ϱ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char EngWord[20];
	int i = 0;

	printf("���ܾ �Է����ּ���: ");
	scanf("%s", EngWord);

	printf("\n");
	printf("�������� ������ ���ܾ�: ");

	while (EngWord[i] != '\0') {				// while���� Ȱ���ؼ� ���� ���ϱ�
		i++;
	}

	//	printf("%d", i);							// ���� �� �׽�Ʈ

	for (int k = i; k >= 0; k--) {
		printf("%c", EngWord[k]);
	}


	return 0;
}

//	printf("%d", strlen(EngWord));							-- for������ Ȱ���Ϸ��ϸ� ������
//	for (int i = strlen(EngWord)-1; i >= 0; i--) {
//		printf("%s", EngWord[i]);
//	}