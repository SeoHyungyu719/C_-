#include <stdio.h>

int main()
{
	printf("자료형 : 크기(바이트)\n");
	printf("char : %d\n", sizeof(char));
	printf("int : %d %d\n", sizeof(int), sizeof(200));
	printf("long long : %d %d\n", sizeof(long long), sizeof(900LL));
	printf("float : %d %d\n", sizeof(float), sizeof 3.14F);
	printf("long double : %d %d\n", sizeof(long double), sizeof 3.24L);

	short s = 32767;
	printf("%d\n", s);
	s = s + 1;
	printf("%d\n", s); // 오버플로 발생, 
	//용량 이상의 데이터가 들어가면 char에서는 0(왜냐하면 0~255), short에서는 -32767로(-32767 ~ 32767) 출력 , 언더플로우는 이와 반대되는 형상
	// 오버/언더 플로우는 경고 창이 뜨지 않음
	
	return 0;
	
}