#include <stdio.h>	//ǥ�� ���̺귯�� stdio.h ��� ���Ͽ� ����� ���� ����
#define PIE 3.14	// PIE �� 3.14�� ����

	double area(double r) {	//���� ������ ���ϴ� double�� �Լ� area ���� (�Ű������� double�� ���� r)

		double a_result;	//������ ���� a_result�� double������ ����
		a_result = r * r * PIE;	//������ ���� = r(������) x r(������) x PIE(3.14)�� ����
		return a_result;	//������ ��ȯ
	}

	double circumference(double r) {	//���� �ѷ��� ���ϴ� double�� ���� circumference ���� (�Ű������� double�� ���� r)

		double c_result;	//�ѷ��� ���� c_result�� double������ ����
		c_result = 2 * PIE * r;		//�ѷ��� ���� = 2 x PIE(3.14) x r(������)���� ����
		return c_result;	//�ѷ��� ��ȯ
	}

	int main() {	//���������� �⺻���� �Է¹޴� ���� �Լ� ����

		printf("U202002265 ������\n\n");	//�й� ���
		printf("���� 1: �Լ��� ����Ͽ� ���� ������ ���� �ѷ��� ���ϴ� ���α׷�\n");	//���� ���
		printf("\n���� �������� �Է��ϸ� ���� ������ �ѷ��� ���̸� ���մϴ�.");		//���� ���� ���

		double r;	//double�� ���� r ����
		printf("\n������ �Է�-> ");		//���������� �Է��ش޶�� ���� ���
		scanf_s("%lf", &r);		//����ڷκ��� ���������� �Է¹��� �� ���� r������ ����

		double area(double r);	//�Ű������� double�� r�� �ϴ� area�Լ� ȣ�� 
		double circuference(double r);	//�Ű������� double�� r�� �ϴ� circuference�Լ� ȣ�� 

		printf("\n���� �������� %.2f�� ���� ������ %.3f�Դϴ�.", r, area(r));	//�Է¹��� r�� �Ҽ��� 2��° �ڸ�����, ���� ���� ������ �Ҽ��� 3��°�ڸ����� ���
		printf("\n���� �������� %.2f�� ���� ���̴� %.3f�Դϴ�\n", r, circumference(r));		//�Է¹��� r�� �Ҽ��� 2��° �ڸ�����, ���� ���� �ѷ��� �Ҽ��� 3��°�ڸ����� ���

		return 0;	//����
	}