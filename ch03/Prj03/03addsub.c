#include <stdio.h>

int main()
{
	int datal = 20, data2 = 13;

	//대입 연산자의 왼쪽과 오른쪽에서의 변수의 의미 해석
	int diff = datal - data2;
	int sum = datal + data2;

	printf("datal : %d, data2 : %d\n", datal, data2);
	printf("차 : %d, 합 : %d \n", diff, sum);

	return 0;
}
