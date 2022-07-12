/* PART1 Chapter6 연습문제 7
원의 반지름 r을 입력받아 원의 면적과 원의 둘레를 구하는 프로그램을 작성하세요.
*/
#include <stdio.h>
#define PI 3.14

int main(){
    double radius, area, round;

    printf("반지름 : ");
    scanf("%lf",&radius);

    area = PI * radius * radius;
    round = 2 * PI * radius;

    printf("원의 면적 : %lf\n",area);
    printf("원의 둘레 : %lf\n",round);
    
    return 0;
}