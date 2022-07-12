/* PART1 Chapter5 연습문제 10
키보드로부터 세 정수를 입력받아 (x+y)*(x+z)/(y%z)를
출력하는 프로그램을 작성하세요.
*/
#include <stdio.h>
#define FEET 30.48

int main(){
    int my_feet = 15000;
    printf("본인이 타고 있는 비행기가 %d피트상공을 날고 있다면 우린 지상에서 %.2lf미터 떨어져 있습니다.",my_feet,(my_feet/100)*FEET);

    return 0;
}