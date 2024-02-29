/*
제목: 도전 프로그래밍 10-8
날짜: 2024.02.29.목
내용: 2의k승 <= N(입력받은 숫자) 중에서 최댓값 K를 구하는 프로그램 만들기
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	
	int inum;					// 입력받는 기준 값
	int knum=2;					// 2의k승 값
	int k = 1;						// 2에 몇승을 제곱할지에 대한 기준치

	printf("숫자를 입력해주세요: ");
	scanf("%d", &inum);


	while (knum <= inum) {		// 같거나 커져지는 구간을 구해서 그값에서 -1번한 K승을 구하기
		knum = knum * 2;
		k++;
	}

	printf("2의k승 <= %d을 성립하는 수들 중 최댓값 k는 %d입니다.", inum, k-1);
	return 0;
}