// 이스케이프 문자를 비롯해서 다양한 문자 리터럴의 표현
#include <stdio.h>

int main()
{
	printf("%Cava", 'J');

	char sq = '\'';
	printf("%c\7\n", '\a'); // /7 /a는 경고음 소리가 출력된다
	printf("%c자바 언어'\n", sq); //문자열 내부에서는 작은 따옴표 그대로 사용가능

	//문자열 내부에서는 큰 따옴표로 반드시 \"로 사용
	printf("\"c언어\" 정말 재미있다!\n");

	return 0;
}