/* PART1 Chapter5 연습문제 5
현재의 원화 환율을 찾아 변수에 저장하고, 달러를 키보드로부터 입력받으면
원화로 출력하는 프로그램을 작성하세요.
*/
#include <stdio.h>
#define EX_RATE 1280

int main(){
    double dollar, won;

    printf("dollar: ");
    scanf("%lf",&dollar);

    won = EX_RATE * dollar;

    printf("%.2lf달러는 %.2lf원입니다.",dollar,won);

    return 0;
}