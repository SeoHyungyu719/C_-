#include <stdio.h>

int main()
{
	printf("�ڷ��� : ũ��(����Ʈ)\n");
	printf("char : %d\n", sizeof(char));
	printf("int : %d %d\n", sizeof(int), sizeof(200));
	printf("long long : %d %d\n", sizeof(long long), sizeof(900LL));
	printf("float : %d %d\n", sizeof(float), sizeof 3.14F);
	printf("long double : %d %d\n", sizeof(long double), sizeof 3.24L);

	short s = 32767;
	printf("%d\n", s);
	s = s + 1;
	printf("%d\n", s); // �����÷� �߻�, 
	//�뷮 �̻��� �����Ͱ� ���� char������ 0(�ֳ��ϸ� 0~255), short������ -32767��(-32767 ~ 32767) ��� , ����÷ο�� �̿� �ݴ�Ǵ� ����
	// ����/��� �÷ο�� ��� â�� ���� ����
	
	return 0;
	
}