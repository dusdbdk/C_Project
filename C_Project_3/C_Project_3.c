#include <stdio.h>	//표준 라이브러리 stdio.h 헤더 파일에 선언된 내용 포함

int main() {	//입력받은 값을 int(정수)형으로 출력받는 함수
	
	int number, j, i, total = 0; //변수와 식별자를 선언해준 후, 변수값을 초기화

	printf("U202002265 김준혁\n\n문제3: 구구단 출력 프로그램\n"); //학번과 이름, 문제 번호와 제목을 출력 (짧아서 묶었다)
	printf("단을 입력하세요? "); //입력받을 수를 요청하는 말을 출력
	scanf_s("%d", &number);	//입력받은 수를 number변수로 저장
	
	for (; number % 2 == 0;) { //외부 반복문. 입력받은 단의 값이 짝수일 경우에 반복
		for (i = 1; i <= 9; i++) { //내부 반복문. 1단부터 오름차순으로 9까지 곱셈
			j = number * i;	//변수j 값을 저장. j는 구구단의 하나의 식에서 나온 값이다. 예) 2 * 5 = 10에서의 10값이 변수 j의 값
			printf("%d * %d = %d \n", number, i, j); //하나의 식을 출력한다. 예) 2 * 5 = 10
			total += j; //total 변수 값에 j의 값을 누적 더하기
		}
		break; //break문을 써주지 않으면 무한루프에 빠지게 된다.
	}
	for (; number % 2 == 1;) { //외부 반복문. 입력받은 값이 홀수일 경우에 반복
		for (i = 9; i >= 1; i--) { //내부 반복문. 9단부터 내림차순으로 1까지 반복 곱셈
			j = number * i; //이하 위와 동일
			printf("%d * %d = %d \n", number, i, j);
			total += j;
		}
		break;
	}
	printf("\n구구단 %d단의 합은 %d입니다.", number, total); //입력한 구구단 값의 총 합을 출력

	return 0;
}