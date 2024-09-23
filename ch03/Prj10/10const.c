// 키워드 const를 사용한 상수 선언
#include <stdio.h>

int main()
{
	//키워드 const로 상수 만들기
	double const e = 2.718281; // 오일러 수
	// e = 2.7182; 상수는 수정할 수 없으므로 주석을 뺴면 컴파일 오류가 발생

	printf("오일러 수 %f\n", e);

	return 0;
}