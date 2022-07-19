/* PART3 Chapter5 연습문제 2
다음 실행 결과를 보고 매크로 ADD() 함수가 정의된 프로그램을 작성하세요.
실행 결과
x + y는 10 입니다.
*/
#include <stdio.h>
#define ADD(x,y) x+y
int main(){
    printf("x + y는 %d 입니다.\n",ADD(6,4));

    return 0;
}