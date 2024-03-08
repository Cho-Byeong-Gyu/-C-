/*
제목: 배열 예제 11-2
날짜: 2024.03.08.금
내용: int형 배열을 선언하여 5개의 정수를 입력받고 입력된 정수들중 최댓값, 최솟값, 입력된 정수들의 총합을 출력하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr[5];				
	int max, min;
	int sum = 0;

	printf("정수를 5개 입력해주쉐요: ");
	scanf(" %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

			
	for (int i = 0; i < 4; i++) {					// max 구하는 반복문
		if (arr[i] > arr[i + 1]) {
			max = arr[i];
		}
		else {
			max = arr[i + 1];
		}

		sum = sum + arr[i];
	}

	min = arr[0];									// 대소비교시 min자체를 for문의 if문에 활용하기 위해 arr[0]으로 초기화해둠

	for (int i = 0; i < 4; i++) {					// min 구하는 반복문
		if (min < arr[i + 1]) {
			min = min;
		}
		else {
			min = arr[i + 1];
		}
	}

	sum = sum + arr[4];								// for문 돌리면서 arr[4]는 크기비교만 할뿐 sum에 더하진 못한 거 보완


	printf("입력한 정수들 중 최댓값: %d \n", max);
	printf("입력한 정수들 중 최솟값: %d \n", min);
	printf("입력한 정수들의 총합: %d \n", sum);
	return 0;

}





/*			크기비교 실패 코드
	if (arr[0] > arr[1]) {					// arr[0]과 arr[1]의 크기비교 if문
		max = arr[0];
		min = arr[1];

		if (arr[1] > arr[3]) {				// 더 큰놈(1)과 arr[2]과 비교
			max = arr[1];
			min = arr[3];

			if (arr[1] > arr[4]) {			// 더 큰놈(1)과 arr[4]과 비교,
				max = arr[1];
				min = arr[4];
			}
			else {							// 더 큰놈(4)과 arr[4]과 비교
				max = arr[4];
				min = arr[1];
			}
		}
		else {								// 더 큰놈(3)과 arr[4]과 비교
			max = arr[3];
			min = arr[1];

			if (arr[3] > arr[4]) {			// 더 큰놈(3)과 arr[4]과 비교
				max = arr[3];
				min = arr[4];
			}
			else {
				max = arr[4];
				min = arr[3];
			}
		}
	}


	else {							// arr[1]과 arr[2]의 크기비교 if문
		max = arr[1];
		min = arr[0];

		if (arr[2] > arr[3]) {			// 더 큰놈과 arr[3]과 비교
			max = arr[2];
			min = arr[3];
		}
		else {
			max = arr[3];
			min = arr[2];
		}
	}
*/