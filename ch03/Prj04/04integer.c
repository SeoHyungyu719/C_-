#include <stdio.h>

int main()
{
	short sVar = 32000; //-32767���� 32767RKwl
	int iVar = -21400000000; // �� 21�� �������� ���� ����

	printf("���� �� : %d %d\n", sVar, iVar);
	
	//C99 ���� �߰��� �ڷ��� : 64��Ʈ�� ����������
	long long dist1 = 27200000000000; // ������ õ�ռ� ���� �Ÿ�(km) 27�� 2õ
	__int64 dist2 = 450000000; // �¾�� �ؿռ� ���� �Ÿ� 45��

	printf("������ õ�ռ� ���� �Ÿ�(km) : %lld\n", dist1);
	printf("�¾�� �ؿռ� ���� �Ÿ�(km): %lld\n", dist2); // long long�� __int64�� ����� ��� ��������ڷ� %lld�� ���

	return 0;


}