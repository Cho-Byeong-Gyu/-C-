/*
����: scanf�Լ� ȣ�� ����
��¥: 2024.02.18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2;
	int result;
	
	printf("���� one: ");
	scanf("%d", &num1);		// num1�� �����Է�

	printf("���� two: ");
	scanf("%d", &num2);		// num2�� �����Է�

	result = num1 + num2;
	printf("%d + %d = %d",num1, num2,result);
	return 0;


}