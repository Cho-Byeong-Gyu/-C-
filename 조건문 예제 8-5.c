/*
����: ���ǹ� ���� 8-5
��¥: 2024.02.25.��
����: switch���� Ȱ���� case�� ���� ���ں��� ����� ����� ����ϱ�
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;
	printf("1�̻� 5������ ������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("\n");

	switch (num)
	{
		case 1:
			printf("1�� one \n");
			break;
		case 2: 
			printf("2�� two \n");
			break;
		case 3:
			printf("3�� three \n");
			break;
		case 4:
			printf("4�� four \n");
			break;
		case 5:
			printf("5�� five \n");
			break;
	}
	return 0;

}