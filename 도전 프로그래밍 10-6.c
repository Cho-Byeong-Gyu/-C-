/*
제목: 도전 프로그래밍 10-6
날짜: 2024.02.29.목
내용: 초(second)를 입력받은 후에 이를 [시,분,초]의 형태로 풀력하는 프로그램을 만들기
	  ex) 3615초 --> h:1 m:0 s:15]
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int Sec;
	int h, m, s;

	printf("초(second)를 입력해주세요: ");
	scanf("%d", &Sec);

	h = Sec / 3600;
	m = Sec % 3600;
	m = m / 60;
	s = Sec % 60;
	
	printf("[H:%d M:%d S:%d]", h, m, s);
	return 0;
}