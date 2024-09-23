//정수형과 실수형 리터럴 상수의 다양한 표현
#include <stdio.h>

int main()
{
	printf("%d, %d\n", 010, 015); // 8진수
	printf("%d, %d\n", 10, 15); // 10진수
	printf("%d, %d\n", 0x1a, 0x15); // 16진수

	printf("%f, ", 2.71828);
	printf("%f, ", 2.71828E+2);
	printf("%f\n", 2.71828e-2);

	return 0;
}