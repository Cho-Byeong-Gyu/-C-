/*
����: �ݺ��� ���� 8-2
��¥: 202402.25.��
����: if~else�� ���� if���� ��� ����Ǿ� �߻��ϴ� ��ȿ������ ��Ƴ���
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;
	double num1, num2;
	double result=0;

	printf("�μ��� �Է����ּ���: ");
	scanf(" %lf %lf", &num1, &num2);
	printf("%lf %lf", num1, num2);
	printf("\n");

	printf("����ϰ���� ��Ģ������ ��ȣ�� �Է����ּ���: \n");
	printf("1. ����  2. �E��  3.����  4.������ \n");
	scanf("%d", &num);
	printf("\n");
	
	if(num == 1) {
		result = num1 + num2;
	}else if (num == 2) {
		result = num1 - num2;
	}else if (num == 3) {
		result = num1 * num2;
	}else {
		result = num1 / num2;
	}
	printf("��Ģ���� �����: %lf", result);

	return 0;
}