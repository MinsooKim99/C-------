/* PART2 Chapter5 연습문제 6
입력 값 두 개를 받아서 이를 더하고, 빼고, 곱하고, 나누는 사칙연산 함수들을 다음과 같은 형태로 구현하세요.
void *add(int i, int j);
void *subtract(int i, int j);
void *multiply(int i, int j);
void *divide(int i, int j);
변형 - 파일을 분할해서 컴파일하기
*/
#include <stdio.h>
#include "calc.h"

int main () 
{
	int a, b;
	void *p = NULL;
	double *p_double;

	printf("첫번째 수를 입력하세요: ");
	scanf("%d", &a);

	printf("두번째 수를 입력하세요: ");
	scanf("%d", &b);

	// p = (int*)add(a, b);
	p = add(a, b);
	printf("add 결과는 %d 입니다. \n", *((int*)p));

	// p = (int*)subtract(a, b);
	p = subtract(a, b);
	printf("sub 결과는 %d 입니다. \n", *((int*)p));

	// p = (int*)multiply(a, b);
	p = multiply(a, b);
	printf("mul 결과는 %d 입니다. \n", *((int*)p));

	// p = (double*)divide(a, b);
	p = divide(a, b);
	printf("div 결과는 %.2lf 입니다. \n", *((double*)p));

	return 0;
}