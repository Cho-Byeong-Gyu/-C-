/*
제목: 자료구조 예제2
날짜: 2024.03.26.화
내용: packed, sorted
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[100];
int S;
int x;
int l, r;							// 문자열의 위치를 표시해줄 변수 선언

int search(int x) {					// 문자열을 검색해주는 함수 + 바이너리 서치 활용
	int s, e, m;
	s = 0;
	e = S - 1;

	while (s <= e) {
		m = (s + e) / 2;			// 바이너리 서치 중간값 세팅해주기
		if (A[m] == x) {
			l = r = m;
			return 1;				// 찾았다는 걸 1로 반환
		}
		else if (A[m] > x) {
			e = m - 1;				// 찾는값이 더 왼쪽이라는 뜻이니까 기준점의 오른쪽 끝을 중간지점-1로 옮기기
		}
		else {						// 찾는값이 더 오른쪽이라는 뜻이니까 기준점의 왼쪽 끝을 중간지점+1로 옮기기
			s = m + 1;
		}

	}
	l = e; r = s;					// 반복문에 포함되지 않는 케이스는 l과 r이 교차하니까 반대로 세팅
	return -1;
}

void insert(int x) {					// 문자열을 삽입시켜주는 함수
	int i;
	for (i = S - 1; i >= r; i--) {
		A[i + 1] = A[i];					// r 뒤족 배열을 뒤로 한칸 씩 밀기
	}
	A[r] = x;							// r번째에 값 새로 끼워넣기
	S++;
}

void delt(int l) {					// 문자열을 삭제시켜주는 함수

	int j;
	for (int j = l; j < S - 1; j++) {
		A[j] = A[j + 1];
	}									// l 뒤쪽 배열 앞으로 한칸씩 땡기기
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
				printf("%d를 찾을 수 없습니다. \n %d~%d사이에 존재합니다. \n", x, l, r);
			}
			else {
				printf("%d는 %d번째에 위치해있습니다.\n", x, r + 1);
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
				delt(l);
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