/*
제목: 도전 프로그래밍 10-4
날짜: 2024.02.28.수
내용: 3500원가지고 크림빵(500원), 새우깡(700원), 콜라(400원)을 잔돈을 남기지 않고 살려고할 때 경우의수를 분석해주기
	  +종류별로 1개씩은 무조건 사야함
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {					// 경우의 수 계산 알고리즘 아직 못짬

	int PossesMoney = 3500;
	int Bnum, Snum, Cnum = 1;
	int total = 0;

	printf("현재 보유금액은 %d원 입니다. \n", PossesMoney);
	printf("크림빵 1개, 새우깡 2개, 콜라4개 \n");
	printf("크림빵 2개, 새우깡 3개, 콜라1개 \n");
	printf("크림빵 4개, 새우깡 1개, 콜라2개 \n");
	printf("어떻게 구매하시겠습니까? \n");

}
	//Bnum = Bnum * 500;
	//Snum = Snum * 700;
	//Cnum = Cnum * 400;

	//total = Bnum + Snum + Cnum;				// 1900원 남음

	//while (total == 3500) {

	//}