/* PART3 Chapter5 연습문제 3
다음 실행 결과를 보고 국어, 영어, 수학 점수를 입력받아서 평균과 학점을 출력하는
프로그램을 작성하세요. 단, 프로그램의 구성은 score.h, score.c, main.c로 구성하세요.
실행 결과
국어, 영어, 수학 점수를 입력하세요: 95 85 92
평균 : 90.66 학점 : A
*/
#include <stdio.h>
#include "score.h"

int main(){
    double kor, eng, math;

    printf("국어, 영어, 수학 점수를 입력하세요 : ");
    scanf("%lf %lf %lf",&kor,&eng,&math);

    printf("평균 : %.2lf 학점: %c\n",avg(kor,eng,math),grade(avg(kor,eng,math)));

    return 0;
}