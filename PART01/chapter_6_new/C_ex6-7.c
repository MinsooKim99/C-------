/* PART1 Chapter6 연습문제 7
원의 반지름 r을 입력받아 원의 면적과 원의 둘레를 구하는 프로그램을 작성하세요.
변형 - 0이하의 수를 입력하기 전까지 계속 입력받기
*/
#include <stdio.h>
#define PI 3.14

int main(){
    double radius, area, round;

    while(1){
        printf("반지름 : ");
        scanf("%lf",&radius);
        if(radius <= 0)
            break;

        area = PI * radius * radius;
        round = 2 * PI * radius;

        printf("원의 면적 : %lf\n",area);
        printf("원의 둘레 : %lf\n",round);
    }
    
    return 0;
}