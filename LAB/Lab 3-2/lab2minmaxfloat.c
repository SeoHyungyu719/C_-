/*
	자료형 float의 최대 최소 매크로 상수 : FLT_MIN, FLT_MAX
	자료형 double의 최대 최소 매크로 상수 : DBL_MIN, DBL_MAX
	위 상수를 참고로 자료형 long doubel의 최대 최소 매크로 상수 출력
	출력을 위한 함수 print()에서 %e로 부동소수형 출력

	float 범위 : 1.175494e-38  3.402823e+38
	double 범위 : 2.225074e-308  1.797693e+308
	long double 범위 : 2.225074e-308  1.797693e+308
*/

#include <stdio.h>
#include <float.h> // 부동소수형 상수가 정의된 헤더파일 삽입

int main()
{
	printf("float 범위 : %e %e\n", FLT_MIN, FLT_MAX);
	printf("double 범위 : %e %e\n", DBL_MIN, DBL_MAX);
	printf("long double 범위 : %e %e\n", LDBL_MIN, LDBL_MAX);

	return 0;
}

