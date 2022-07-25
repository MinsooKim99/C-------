/* PART3 Chapter5 연습문제 1
사칙연산 프로그램을 구성하는 +, -, *, / 함수의 선언을 myheader.h로 구성하고
함수의 정의 부분은 myfunc.c로 그리고 main() 함수에서 사칙연산 함수들을 호출해서
결과를 확인하는 파일 main.c를 작성하세요.
변형 - void 포인터 함수 사용하기
*/
#include <stdio.h>
#include "myheader.h"

int main(){
    int a, b;

    printf("정수 두개 입력: ");
    scanf("%d %d",&a,&b);

    printf("%d + %d = %d\n",a,b,*(int*)add(a,b));
    printf("%d - %d = %d\n",a,b,*(int*)sub(a,b));
    printf("%d * %d = %d\n",a,b,*(int*)mul(a,b));
    printf("%d / %d = %.2lf\n",a,b,*(double*)div(a,b));
    
    return 0;
    }