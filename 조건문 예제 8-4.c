/*
제목: 조건문 예제 8-4
날짜: 2024.02.25.일
내용: 조건문을 활용하여 2개의 정수를 입력받고, 무조건 큰수에서 작은수로 뺸 두수의 차를 출력하기(출력값은 항상 양수)
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num1, num2;
	int result;

	printf("두수를 입력해주세요: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");

	if(num1>num2){
		result = num1 - num2;
	}
	else if (num1 < num2) {
		result = num2 - num1;
	}
	else {
		result = 0;
	}

	printf("두수의 차는 %d입니다. \n", result);
	return 0;
}
