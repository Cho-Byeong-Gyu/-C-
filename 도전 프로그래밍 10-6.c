/*
����: ���� ���α׷��� 10-6
��¥: 2024.02.29.��
����: ��(second)�� �Է¹��� �Ŀ� �̸� [��,��,��]�� ���·� Ǯ���ϴ� ���α׷��� �����
	  ex) 3615�� --> h:1 m:0 s:15]
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int Sec;
	int h, m, s;

	printf("��(second)�� �Է����ּ���: ");
	scanf("%d", &Sec);

	h = Sec / 3600;
	m = Sec % 3600;
	m = m / 60;
	s = Sec % 60;
	
	printf("[H:%d M:%d S:%d]", h, m, s);
	return 0;
}