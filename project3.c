/*
제목: 자료구조 예제3
날짜: 2024.03.29.금
내용: unpacked, unsorted
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[100], B[100];					// B배열을 공간이 비어있는지 쓰고있는지 체크하기 위한 배열
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
			if (B[m] == 1) {		// 값이 체킹되어있는지도 확인
				return 1;
			}
			else {
				return -1;
			}
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
	int i, j;
	if (l = r) {
		B[l] = 1;
	}
	else if (l == -1) {						// 오른쪽으로 당기는 케이스
		i = r;
		while (B[i] == 1 && i < S)
			i++;
		if (i == S) {
			for (j = S - 1; j >= r; j--) {
				A[j + 1] = A[j]; B[j + 1] = B[j];				// 기준점 뒷부분은 오른쪽으로 밀어내기 
			}
			A[r] = x; B[r] = 1;
			S++;
		}
		else {
			for (j = i - 1; j >= r; j--) {
				A[j + 1] = A[j]; B[j + 1] = B[j];				// 기준점 뒷부분은 오른쪽으로 밀어내기 
			}
			A[r] = x; B[r] = 1;
			S++;
		}
	}
	else if (r == S) {						// 기준점의 왼쪽부분으로 당기는 케이스
		i = l;
		while (B[i] == 1 && i >= 0) {
			i--;
		}
		if (i == -1) {
			A[S] = x; B[S] = 1; 
			S++;
		}
		else {
			for (j = i; j < r; j++) {
				A[j] = A[j + 1]; B[j] = B[j + 1];
			}
			A[r - 1] = x; 
			B[r - 1] = 1;
			S++;
		}
	}
	else {								// 왼쪽부분 case
		i = l;
		while (B[i] == 1 && i >= 0) {
			i--;
		}
		if (i != -1) {					// 빈자리가 있고, 왼쪽케이스에선 i가 왼쪽을 가리키니까 왼쪽으로 당기기
			for (j = i; j < l; j++) {
				A[j] = A[j + 1]; B[j] = B[j + 1];
			}
			A[l] = x; B[l] = 1;
			S++;
		}
		else {							// 오른쪽부분 case
			i = r;
			while (B[i] == 1 && i < S) {
				i++;
			}
			if (i != S) {				// 중간에 빈자리가 있음, 오른쪽으로 당기며 찾기
				for (j = i - 1; j >= r; j--) {
					A[j + 1] = A[j]; B[j + 1] = B[j];
				}
				A[r] = x; B[r] = 1;
			}
			else {
				for (j = S - 1; j >= r; j--) {
					A[j + 1] = A[j]; B[j + 1] = B[j];
				}
				A[r] = x; B[r] = 1;
			}
			S++;
		}

	}
}

void delt(int l) {					// 문자열을 삭제시켜주는 함수

	B[l] = 0;
}


int main(void) {

	char c;

	while (1) {								// 무한 반복문으로 세팅
		printf("S = %d \n", S);				// 현재 S값도 출력
		for (int i = 0; i < S; i++) {		// 현재 배열상태 출력
			printf("%d  ", A[i]);
		}
		printf("\n");
		for (int k = 0; k < S; k++) {		// 현재 마킹하는 배열 체크상태 출력
			printf("%d  ", B[k]);
		}
		printf("\n");

		scanf("%c", &c);					// 문자 입력받기

		if (c == 's') {
			printf("찾고 싶은 값을 입력해주세요: ");
			scanf("%d", &x);					// 문자 입력받기
			printf("\n");

			search(x);

			if (search(x) == -1 && l != r) {
				printf("%d를 찾을 수 없습니다. \n %d~%d사이에 존재합니다. \n", x, l, r);
			}
			else if (search(x) == -1 && l == r) {
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
		}


	}
	return 0;
}