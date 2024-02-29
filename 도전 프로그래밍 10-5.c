/*
제목: 도전 프로그래밍 10-5
날짜: 2024.02.28.목
내용: 10개의 소수를 출력하는 프로그램을 만들기 (1로 밖에 안나눠지면 소수임)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int i;
	int count = 1;				// 소수는 1로밖에 안나눠줘야함

	for (i = 1; count <= 10; i++) {		// 10개출력하는걸 for문 활용
		if (i == 2 || i == 3) {
			printf("%d ", i);
		}
		else if (i % 2 == 0 || i % 3 == 0 ) {	// 소수 걸러내기
		}else {
			printf("%d ", i);
			count++;
		}

	}
}