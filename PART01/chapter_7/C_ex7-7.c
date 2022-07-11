/* PART1 Chapter7 연습문제 7
시험점수의 평균을 산출하려고 합니다. 과목은 총 10과목입니다.
각 과목의 점수를 차례로 입력받고 평균을 보여주는 프로그램을 작성해 보세요.
*/
#include <stdio.h>
int main(){
    int score, i = 0;
    double sum = 0;

    printf("열 과목의 점수의 평균을 계산합니다.\n");
    for(;i<10;i++){
        printf("점수를 입력해 주세요 : ");
        scanf("%d",&score);
        sum += score;
    }

    printf("열 과목의 점수의 평균은 %.1lf점입니다.",sum/10);

    return 0;
}