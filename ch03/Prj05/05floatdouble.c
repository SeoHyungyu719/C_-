#include <stdio.h>
// �ε��Ҽ��� 3.14���� �Ǽ��� ǥ���ϴ� �ڷ���, float, double, long double ���� �ִ�


int main()
{
	float x = 3.14F; // F�� �ݵ�� �ڿ� �ٿ��־����, �� ���̸� ���� �߻�
	double y = -3.141592; // doulb�� ��������� float�� 2��
	long double z = 29.74; // double�� long double�� ��������� ��� 64��Ʈ

	printf("�ε��Ҽ� �� : %f %f %f\n", x, y, z); //��� %f�� ��� ����

	return 0;
}