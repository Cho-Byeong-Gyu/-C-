/*
����: ���ǹ� ���� 8-1 (if���ǹ�)
��¥: 2024.02.25.��
����: if���ǹ� Ȱ���ϱ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;

	printf("������ �Է����ּ���: ");
	scanf("%d", &num);
	printf("\n");

	if(num<0) 
		printf("�Է��Ͻ� ���ڰ� 0���� �۽��ϴ�. \n");
	
	if(num==0) 
		printf("���� 0�� �Է��ϼ̽��ϴ�. \n");
	
	if(num>0) 
		printf("�Է��Ͻ� ���ڰ� 0���� Ů�ϴ�. \n");
	

	return 0;
}