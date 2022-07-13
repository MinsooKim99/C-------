/* PART1 Chapter5 연습문제 10
1피트(Feet)는 30.48cm 입니다. 만약 해외 여행 중에 본인이 타고 있던 비행기가 고도 15000피트 상공을 날고 있다면
지상에서 몇 미터 떨어져 있는 것인지를 계산하는 프로그램을 작성하세요.
*/
#include <stdio.h>
#define FEET 30.48

int main(){
    int my_feet = 15000;
    printf("본인이 타고 있는 비행기가 %d피트상공을 날고 있다면 우린 지상에서 %.2lf미터 떨어져 있습니다.",my_feet,(my_feet/100)*FEET);

    return 0;
}