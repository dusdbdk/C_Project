#include<stdio.h>	//ǥ�� ���̺귯�� stdio.h ��� ���Ͽ� ����� ���� ����
#include <stdlib.h>	//ǥ�� ���̺귯�� stdilb.h ��� ���Ͽ� ����� ���� ����
#include <time.h>	//ǥ�� ���̺귯�� time.h ��� ���Ͽ� ����� ���� ����

int main() {	//�Է¹��� ���� int(����)������ ��¹޴� �Լ�

	int num1, num2, input = 0;	//������ �ĺ��ڸ� �������� ��, �������� �ʱ�ȭ

	srand(time(NULL));	//������ �õ尪�� ���� (���ڰ��� time() �Լ� ���)
	num1 = rand() % 100;	//����1 ����
	num2 = rand() % 100;	//����2 ����

	printf("U202002265 ������\n\n");	//�й��� �̸��� ���
	printf("����1: 1���� 100������ ������ �߻��Ͽ� ����/����/������ ���� ���� ���α׷�\n");	//���� ���

	printf("1. %d + %d = ", num1, num2);	//����1. �������� ������ �������� �̿��� ���� ���
	scanf_s("%d", &input);	//����ڰ� �Է��� �� ����

	if (input == num1 + num2) {		//�Է¹��� ���� ������ ������ ����1 + ����2 ���
		printf("����!\n\n");	//����! ���
	}
	else {						//�ƴ϶�� 
		printf("����..\n\n");	//����.. ���
	}

	printf("2. %d - %d = ", num1, num2);	//����2. �������� ������ �������� �̿��� ���� ���
	scanf_s("%d", &input);		

	if (input == num1 - num2) {		//�Է¹��� ���� ������ ������ ����1 - ����2 ���
		printf("����!\n\n"); ;;
	}
	else {
		printf("����..\n\n");
	}

	printf("3. %d * %d = ", num1, num2);	//����3. �������� ������ �������� �̿��� ���� ���
	scanf_s("%d", &input);

	if (input == num1 * num2) {		//�Է¹��� ���� ������ ������ ����1 * ����2 ���
		printf("����!\n");
	}
	else {
		printf("����..\n");
	}
	return 0;	//����
}