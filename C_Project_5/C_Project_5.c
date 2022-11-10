#include <stdio.h>		//표준 라이브러리 stdio.h 헤더 파일에 선언된 내용 포함
#include <stdbool.h>	//무한반복문인 while(true)를 사용하기 위해 쓰이는 헤더파일

long sum(int num) {		//정수형 변수 num을 매개변수로 입력받은 정수를 1부터 input까지 각각의 합을 출력하는 long형 재귀 함수 sum 선언

	int n;	//정수형 변수 n 선언

	if (num > 0) {	//만약 입력받은 수가 0보다 클 때
		n = num + sum(num - 1);		//변수 n의 값은 (입력받은 수 + 입력받은 수에서 1을뺀 값을 매개변수로 계산된 sum함수 값 (재귀함수))
		printf("1부터   %d까지의 합:    %d\n", num, n);		//1부터 입력 받은 수까지의 합 출력
		return n;	//n값 반환
	}
	else {	//입력받은 수가 음수일 때
		return 0;	//종료
	}
}

int main() {		//정수형값을 기본으로 입력받는 메인 함수 선언

	int input;		//정수형 변수 input 선언

	printf("U202002265 김준혁\n\n");	//학번 출력
	printf("문제 2: 사용자로부터 입력받은 정수를 재귀함수를 한번 호출하여 1부터 input까지 각각의 합을 출력하는 프로그램\n");	//문제 출력
			
	while (true) {	//무한반복
		printf("\n합을 구할 input 값을 입력하세요? ");	//input값을 입력하라는 문구 출력
		scanf_s("%d", &input);	//사용자로부터 정수를 입력받아서 변수 input값으로 지정

		if (input > -1) {	//만약 입력받은 input 변수 값이 -1보다 크다면
			printf("1부터 %d까지 각각의 합을 구하는 프로그램입니다.\n\n", input);	//1부터 input까지 각각의 합을 구한다는 문구 출력
			sum(input);		//함수 sum 호출 
		}
		else {		//-1보다 작거나 같다면 
			printf("입력한 값이 음수라 프로그램 종료\n");	//입력한 값이 음수라 프로그램 종료 출력
			return 0;	//종료
		}
	}
}