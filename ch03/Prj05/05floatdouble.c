#include <stdio.h>
// 부동소수형 3.14같은 실수를 표현하는 자료형, float, double, long double 등이 있다


int main()
{
	float x = 3.14F; // F를 반드시 뒤에 붙여주어야함, 안 붙이면 오류 발생
	double y = -3.141592; // doulb의 저장공간은 float의 2배
	long double z = 29.74; // double과 long double의 저장공간은 모두 64비트

	printf("부동소수 값 : %f %f %f\n", x, y, z); //모두 %f로 출력 가능

	return 0;
}