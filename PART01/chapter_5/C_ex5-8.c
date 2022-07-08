/* PART1 Chapter5 연습문제 8
현재 시각(시,분,초)를 입력받아 오늘 00시 00분 00초를 기준으로
몇 초가 흘렀는지를 계산하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main(){
    int hour, minute, second, total_seconds;
    
    printf("hour: ");
    scanf("%d",&hour);
    printf("minute: ");
    scanf("%d",&minute);
    printf("second: ");
    scanf("%d",&second);

    total_seconds = 60*60*hour + 60*minute + second;

    printf("%d시 %d분 %d초는 0시 0분 0초로부터 %d초가 흐른 시간입니다.\n",hour,minute,second,total_seconds);

    return 0;
}