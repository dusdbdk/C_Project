#include<stdio.h>	//표준 라이브러리 stdio.h 헤더 파일에 선언된 내용 포함
#include <stdlib.h>	//표준 라이브러리 stdilb.h 헤더 파일에 선언된 내용 포함
#include <time.h>	//표준 라이브러리 time.h 헤더 파일에 선언된 내용 포함

int main() {	//입력받은 값을 int(정수)형으로 출력받는 함수

	int num1, num2, input = 0;	//변수와 식별자를 선언해준 후, 변수값을 초기화

	srand(time(NULL));	//난수의 시드값을 설정 (인자값은 time() 함수 사용)
	num1 = rand() % 100;	//난수1 생성
	num2 = rand() % 100;	//난수2 생성

	printf("U202002265 김준혁\n\n");	//학번과 이름을 출력
	printf("문제1: 1부터 100사이의 난수를 발생하여 덧셈/뺄셈/곱셈에 대한 검증 프로그램\n");	//문제 출력

	printf("1. %d + %d = ", num1, num2);	//문제1. 랜덤으로 생성된 난수들을 이용한 덧셈 출력
	scanf_s("%d", &input);	//사용자가 입력한 값 저장

	if (input == num1 + num2) {		//입력받은 값이 위에서 생성된 난수1 + 난수2 라면
		printf("정답!\n\n");	//정답! 출력
	}
	else {						//아니라면 
		printf("오답..\n\n");	//오답.. 출력
	}

	printf("2. %d - %d = ", num1, num2);	//문제2. 랜덤으로 생성된 난수들을 이용한 뺄셈 출력
	scanf_s("%d", &input);		

	if (input == num1 - num2) {		//입력받은 값이 위에서 생성된 난수1 - 난수2 라면
		printf("정답!\n\n"); ;;
	}
	else {
		printf("오답..\n\n");
	}

	printf("3. %d * %d = ", num1, num2);	//문제3. 랜덤으로 생성된 난수들을 이용한 곱셈 출력
	scanf_s("%d", &input);

	if (input == num1 * num2) {		//입력받은 값이 위에서 생성된 난수1 * 난수2 라면
		printf("정답!\n");
	}
	else {
		printf("오답..\n");
	}
	return 0;	//종료
}
