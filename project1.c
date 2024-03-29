/*
제목: 자료구조 예제1
날짜: 2024.03.26.화
내용: packed, unsorted
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[100];
int S;
int x;
int idx;							// 문자열의 위치를 표시해줄 변수 선언

int search(int x) {					// 문자열을 검색해주는 함수
	int i;
	for (i = 0; i < S; i++) {
		if (A[i] == x) {				// 문자열을 찾았으면 반복문 탈출
			break;
		}
	}
	if (i == S) {					// 문자열을 찾지 못하면 search함수 반환값을 -1로 세팅
		return -1;
	}
	else {
		idx = i;					// idx에 인덱스 저장후 리턴값 1로 함수 반환값 세팅
		return 1;
	}
}

void insert(int x) {					// 문자열을 삽입시켜주는 함수
	A[S] = x;
	S++;
}

void delt(int idx) {					// 문자열을 삭제시켜주는 함수

	A[idx] = A[S - 1];
	S--;
}


int main(void) {

	char c;

	while (1) {								// 무한 반복문으로 세팅
		printf("S = %d \n", S);				// 현재 S값도 출력
		for (int i = 0; i < S; i++) {		// 현재 배열상태 출력
			printf("%d  ", A[i]);
		}
		printf("\n");

		scanf("%c", &c);					// 문자 입력받기

		if (c == 's') {
			printf("찾고 싶은 값을 입력해주세요: ");
			scanf("%d", &x);					// 문자 입력받기
			printf("\n");

			search(x);

			if (search(x) == -1) {
				printf("%d를 찾을 수 없습니다. \n", x);
			}
			else {
				printf("%d는 %d번째에 위치해있습니다.\n", x, idx + 1);
			}
		}
		else if (c == 'i') {
			printf("삽입하고 싶은 값을 입력해주세요: ");
			scanf("%d", &x);					// 문자 입력받기

			if (search(x) == 1) {
				printf("이미 해당 값이 존재합니다 \n");
			}
			else {
				insert(x);
			}
		}
		else if (c == 'd') {
			printf("삭제하고 싶은 값을 입력해주세요: ");
			scanf("%d", &x);					// 문자 입력받기
			printf("\n");

			if (search(x) == 1) {
				delt(idx);
			}
			else {
				printf("해당 값이 존재하지않아 삭제할 수 없습니다. \n");
			}
		}
		else if (c == 'q') {
			printf("나가요~ \n");
			break;
		}
		else {
			printf("\n");
		}
	}
	return 0;
}