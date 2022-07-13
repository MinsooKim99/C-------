/* PART1 Chapter6 연습문제 6
반지름이 rkm인 원형의 트랙을 시속 vkm로 달리는 자동차가 있습니다.
트랙의 반지름과 자동차의 속력을 입력받은 후, 한바퀴를 완주하는데
걸리는 시간을 분(소수점 셋째 자리까지)으로 표시하는 프로그램을 작성하세요.
변형 - 몇바퀴 완주하는지 입력받기
*/
#include <stdio.h>
#define PI 3.14

int main(){
    int lap;
    double radius, speed, minute;


    printf("반지름 : ");
    scanf("%lf",&radius);
    printf("자동차의 속력 : ");
    scanf("%lf",&speed);
    printf("몇바퀴? : ");
    scanf("%d",&lap);

    minute = (2*PI*radius/speed)*60;

    printf("%d바퀴 도는데 걸리는 시간은 %.3lf분\n",lap,lap*minute);

    return 0;
}