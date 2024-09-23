#include <stdio.h>

/*
	문자 #을 변수 ch에 저장하여 문자와 코드 번호를 출력
	변수 pop1rhk pop2를 적정한 자료형으로 선언하여 인구를 저장하고 출력
*/

int main()
{
	int ch = '#';
	printf("%d\n", ch); //십진 코드 값 출력
	printf("%c\n", ch); //문자 출력

	int pop1 = 51000000;
	long long pop2 = 7716600000;

	printf("%d %lld\n", pop1, pop2);

	return 0;
}