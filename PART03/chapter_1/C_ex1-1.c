/* PART3 Chapter1 연습문제 1
오늘은 신체검사를 하는 날입니다. 신체검사를 받는 학생들의 정보를 하나로 묶어서
정리를 하려고 합니다. 다음의 정보를 하나의 구조체를 선언해 보세요.
학번(정수), 혈액형(문자), 시력(실수), 몸무게(정수)
*/
#include <stdio.h>

typedef struct student{
    int no;
    char blood_type;
    double sight;
    int weight;
}STUDENT;

int main(){
    STUDENT stu = {2018152002,'O',1.0,40};
    printf("학번: %d\n혈액형: %c\n시력: %lf\n몸무게 %d\n",stu.no,stu.blood_type,stu.sight,stu.weight);
    
    return 0;
}