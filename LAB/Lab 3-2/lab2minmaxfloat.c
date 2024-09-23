/*
	�ڷ��� float�� �ִ� �ּ� ��ũ�� ��� : FLT_MIN, FLT_MAX
	�ڷ��� double�� �ִ� �ּ� ��ũ�� ��� : DBL_MIN, DBL_MAX
	�� ����� ����� �ڷ��� long doubel�� �ִ� �ּ� ��ũ�� ��� ���
	����� ���� �Լ� print()���� %e�� �ε��Ҽ��� ���

	float ���� : 1.175494e-38  3.402823e+38
	double ���� : 2.225074e-308  1.797693e+308
	long double ���� : 2.225074e-308  1.797693e+308
*/

#include <stdio.h>
#include <float.h> // �ε��Ҽ��� ����� ���ǵ� ������� ����

int main()
{
	printf("float ���� : %e %e\n", FLT_MIN, FLT_MAX);
	printf("double ���� : %e %e\n", DBL_MIN, DBL_MAX);
	printf("long double ���� : %e %e\n", LDBL_MIN, LDBL_MAX);

	return 0;
}

