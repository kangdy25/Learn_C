#include <stdio.h>

int main(void) {

	// 산술연산자: + - * / %
	// 대입연산자: =
	int a = 3;
	int b = 7;
	int c;
	int d = 0;

	c = a + b;
	printf("%d\n", c);
	

	// 논리연산자: || && > < >= <= ==
	
	// 맞으면 1 아니면 0
	// c언어에서 맞다는 0이 아니면 전부 맞는 것!! c언어에서 틀리다는 0이다.
	// 논리 연산 결과가 맞으면 1로 값을 표시!! 틀리면 0으로 값을 표시!!
	c = a || b;
	a = d && c;
	d = a == b;
		
	// 비트연산자: | & << >>
	// 임베디드 분야를 꿈꾼다면 비트연산은 필수!!
	char p = 8;
	char q = 4;
	char r = 0;
	// 0000 1000	
	// 0000 0100	
	printf("%d\n", p | q);
	printf("%d\n", p & q);

	r = p | q;
	// 0000 1100
	r = p & q;
	// 0000 0000
	
	
	// 삼항연산자: ?

	// 크기 연산자
	// sizeof()

	return 0;
}
