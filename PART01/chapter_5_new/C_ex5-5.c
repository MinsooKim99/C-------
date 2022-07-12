/* PART1 Chapter5 연습문제 5
현재의 원화 환율을 찾아 변수에 저장하고, 달러를 키보드로부터 입력받으면
원화로 출력하는 프로그램을 작성하세요.
변형 - 원화를 달러로도 변환
*/
#include <stdio.h>
#define EX_RATE 1280

int main(){
    double dollar, won;

    printf("dollar: ");
    scanf("%lf",&dollar);

    won = EX_RATE * dollar;

    printf("%.2lf달러는 %.2lf원입니다.\n",dollar,won);

    printf("won: ");
    scanf("%lf",&won);

    dollar = won/EX_RATE;

    printf("%.2lf원은 %.2lf달러입니다. \n",won,dollar);
    
    return 0;
}