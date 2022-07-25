/* PART3 Chapter5 연습문제 2
다음 실행 결과를 보고 매크로 ADD() 함수가 정의된 프로그램을 작성하세요.
실행 결과
x + y는 10 입니다.
변형 - 아래 함수를 결과값이 제대로 나오게 수정하세요.
#include <stdio.h>
#define MUL(x,y) x*y
int main(){
    int a=6,b=3;
    printf("%d * %d는 %d 입니다.\n",a+b,a-b,MUL(a+b,a-b));

    return 0;
}
*/
#include <stdio.h>
#define MUL(x,y) (x)*(y)
int main(){
    int a=6,b=3;
    printf("%d * %d은(는) %d 입니다.\n",a+b,a-b,MUL(a+b,a-b));

    return 0;
}