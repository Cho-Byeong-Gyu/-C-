/*
����: ���ǹ� ���� 8-4
��¥: 2024.02.25.��
����: ���ǹ��� Ȱ���Ͽ� 2���� ������ �Է¹ް�, ������ ū������ �������� �A �μ��� ���� ����ϱ�(��°��� �׻� ���)
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num1, num2;
	int result;

	printf("�μ��� �Է����ּ���: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");

	if(num1>num2){
		result = num1 - num2;
	}
	else if (num1 < num2) {
		result = num2 - num1;
	}
	else {
		result = 0;
	}

	printf("�μ��� ���� %d�Դϴ�. \n", result);
	return 0;
}
