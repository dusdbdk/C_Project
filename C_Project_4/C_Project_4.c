#include <stdio.h>	//표준 라이브러리 stdio.h 헤더 파일에 선언된 내용 포함
#define PIE 3.14	// PIE 값 3.14로 정의

	double area(double r) {	//원의 면적을 구하는 double형 함수 area 선언 (매개변수는 double형 변수 r)

		double a_result;	//면적값 변수 a_result를 double형으로 선언
		a_result = r * r * PIE;	//면적값 변수 = r(반지름) x r(반지름) x PIE(3.14)로 지정
		return a_result;	//면적값 반환
	}

	double circumference(double r) {	//원의 둘레를 구하는 double형 변수 circumference 선언 (매개변수는 double형 변수 r)

		double c_result;	//둘레값 변수 c_result를 double형으로 선언
		c_result = 2 * PIE * r;		//둘레값 변수 = 2 x PIE(3.14) x r(반지름)으로 지정
		return c_result;	//둘레값 반환
	}

	int main() {	//정수형값을 기본으로 입력받는 메인 함수 선언

		printf("U202002265 김준혁\n\n");	//학번 출력
		printf("문제 1: 함수를 사용하여 원의 면적과 원의 둘레를 구하는 프로그램\n");	//문제 출력
		printf("\n원의 반지름을 입력하면 원의 면적과 둘레의 길이를 구합니다.");		//문제 설명 출력

		double r;	//double형 변수 r 선언
		printf("\n반지름 입력-> ");		//반지름값을 입력해달라는 문구 출력
		scanf_s("%lf", &r);		//사용자로부터 반지름값을 입력받은 후 변수 r값으로 저장

		double area(double r);	//매개변수를 double형 r로 하는 area함수 호출 
		double circuference(double r);	//매개변수를 double형 r로 하는 circuference함수 호출 

		printf("\n원의 반지름이 %.2f인 원의 면적은 %.3f입니다.", r, area(r));	//입력받은 r을 소수점 2번째 자리까지, 계산된 원의 면적은 소수점 3번째자리까지 출력
		printf("\n원의 반지름이 %.2f인 원의 길이는 %.3f입니다\n", r, circumference(r));		//입력받은 r을 소수점 2번째 자리까지, 계산된 원의 둘레는 소수점 3번째자리까지 출력

		return 0;	//종료
	}