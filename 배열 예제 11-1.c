/*
����: �迭 ���� 11-2
��¥: 2024.03.08.��
����: int�� �迭�� �����Ͽ� 5���� ������ �Է¹ް� �Էµ� �������� �ִ�, �ּڰ�, �Էµ� �������� ������ ����ϱ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr[5];				
	int max, min;
	int sum = 0;

	printf("������ 5�� �Է����ֽ���: ");
	scanf(" %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

			
	for (int i = 0; i < 4; i++) {					// max ���ϴ� �ݺ���
		if (arr[i] > arr[i + 1]) {
			max = arr[i];
		}
		else {
			max = arr[i + 1];
		}

		sum = sum + arr[i];
	}

	min = arr[0];									// ��Һ񱳽� min��ü�� for���� if���� Ȱ���ϱ� ���� arr[0]���� �ʱ�ȭ�ص�

	for (int i = 0; i < 4; i++) {					// min ���ϴ� �ݺ���
		if (min < arr[i + 1]) {
			min = min;
		}
		else {
			min = arr[i + 1];
		}
	}

	sum = sum + arr[4];								// for�� �����鼭 arr[4]�� ũ��񱳸� �һ� sum�� ������ ���� �� ����


	printf("�Է��� ������ �� �ִ�: %d \n", max);
	printf("�Է��� ������ �� �ּڰ�: %d \n", min);
	printf("�Է��� �������� ����: %d \n", sum);
	return 0;

}





/*			ũ��� ���� �ڵ�
	if (arr[0] > arr[1]) {					// arr[0]�� arr[1]�� ũ��� if��
		max = arr[0];
		min = arr[1];

		if (arr[1] > arr[3]) {				// �� ū��(1)�� arr[2]�� ��
			max = arr[1];
			min = arr[3];

			if (arr[1] > arr[4]) {			// �� ū��(1)�� arr[4]�� ��,
				max = arr[1];
				min = arr[4];
			}
			else {							// �� ū��(4)�� arr[4]�� ��
				max = arr[4];
				min = arr[1];
			}
		}
		else {								// �� ū��(3)�� arr[4]�� ��
			max = arr[3];
			min = arr[1];

			if (arr[3] > arr[4]) {			// �� ū��(3)�� arr[4]�� ��
				max = arr[3];
				min = arr[4];
			}
			else {
				max = arr[4];
				min = arr[3];
			}
		}
	}


	else {							// arr[1]�� arr[2]�� ũ��� if��
		max = arr[1];
		min = arr[0];

		if (arr[2] > arr[3]) {			// �� ū��� arr[3]�� ��
			max = arr[2];
			min = arr[3];
		}
		else {
			max = arr[3];
			min = arr[2];
		}
	}
*/