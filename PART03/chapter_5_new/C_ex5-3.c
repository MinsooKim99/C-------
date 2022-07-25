/* PART3 Chapter5 연습문제 3
다음 실행 결과를 보고 국어, 영어, 수학 점수를 입력받아서 평균과 학점을 출력하는
프로그램을 작성하세요. 단, 프로그램의 구성은 score.h, score.c, main.c로 구성하세요.
실행 결과
국어, 영어, 수학 점수를 입력하세요: 95 85 92
평균 : 90.66 학점 : A
변형 - 학생 명단 구조체 만들어서 한명씩 검사하기
*/
#include <stdio.h>
#include "score.h"

int main(){
    // int i;
    // double kor, eng, math;
    // double average;
    STUDENT stu[STU_NUM];
    STUDENT* p = NULL;
    p = stu;

    GetScore(p);
    printf("입력이 종료되었습니다...\n");

    return 0;
}