/*
����: �ݺ��� ���� 7-2 
��¥: 2024.02.24.��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num, count = 1;

	printf("������ �Է����ּ���: ");
	scanf("%d", &num);

	while (count <= num) {
		printf("%d��° Hello World!�� ������Դϴ�! \n", count);
		count++;
	}


	return 0;

}