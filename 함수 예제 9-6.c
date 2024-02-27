/*
제목: 함수 예제 9-6
날짜: 2024.02.27.화
내용: static 변수활용 예제- 전역변수 total을 static 지역변수로 대체하기
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int total						//전역변수를 static 지역변수로 대체

int AddTotal(int num) {

	static int total;			// 전역변수 대체용 - total이란 변수가 return 값을 내보낸다고 초기화X
	total += num;
	return total;
}

int main() {
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("입력%d: ", i + 1);				// 입력 횟수 카운팅
		scanf("%d", &num);
		printf("누적: %d \n", AddTotal((num)));		// static 지역변수를 활용하여 전역변수 처럼 누적해서 변수에 더한값 출력
	}
	return 0;
}