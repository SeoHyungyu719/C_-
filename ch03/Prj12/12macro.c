//������ �ִ� �ּ� ��ũ�� ���

#include <stdio.h>
#include <limits.h> // ������, ������ ����� ���ǵ� ������� ����

int main()
{
	//������� limits.h�� ���ǵ� �� �ڷ����� �ִ� �ּ� ��ũ�� ���
	printf("%d ~ %d\n", CHAR_MIN, CHAR_MAX);
	printf("%d ~ %u\n", 0, USHRT_MAX);
	printf("%d ~ %d\n", INT_MIN, INT_MAX);
	printf("%lld ~ %lld\n", LLONG_MIN, LLONG_MAX);

	return 0;
}