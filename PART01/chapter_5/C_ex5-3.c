/* PART1 Chapter5 연습문제 3
다음 프로그램을 실행했을 때 결과 값을 예상해 보고 분석해 보세요.
*/
#include <stdio.h>

int main(){
    int x=3, y=5, z=3, k=2;
    int a;

    a = x < y || x < z && z < k;
    printf("결과값 1 a: %d \n",a);

    a = (x < y || x < z) && z < k;
    printf("결과값 2 a: %d \n",a);
    
    // 괄호의 우선순위가 제일 높다!
    // 조건연산자의 우선순위가 비트연산자의 우선순위보다 높다!
    // and연산자의 우선순위가 or연산자의 우선순위보다 높다!

    return 0;
}