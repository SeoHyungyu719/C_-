//enum�� ������ ���

#include <stdio.h>

int main()
{
	// Ű���� enum���� ������ ���� ��� ��� �����
	enum DAY {SUN, MON, TUE, WED, THU, FRI, SAT};
	printf("%d %d\n", SUN, THU); // 0 4

	// ��� ��Ͽ��� Ư���� ���� ���� ����
	enum SHAPE{ POINT, LINE, TRI = 3, RECT, OCTA = 8, CIRCLE};
	printf("LINE : %d, RECT : %d, CIRCLE : %d\n", LINE, RECT, CIRCLE);

	enum pl { c = 1972, cpp = 1983, java = 1995, csharp = 2000 };
	printf("c : %d, cpp : %d, java : %d\n", c, cpp, csharp);
	return 0;
}