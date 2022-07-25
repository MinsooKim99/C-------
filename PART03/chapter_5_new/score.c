#ifndef _score_
    #include "score.h"
    #include <stdio.h>
#endif
double avg(double a, double b, double c){
    return (a+b+c)/3;
}
char grade(double score){
    if(score>=90){
        return 'A';
    }
    else if(score>=80){
        return 'B';
    }
    else{
        return 'F';
    }
}
void GetScore(STUDENT* stu){
    int i;
    double average;
     for(i=0;i<STU_NUM;i++){
        printf("%d번 학생 입력창입니다.\n",i+1);
        printf("국어, 영어, 수학 점수를 입력하세요 : ");
        scanf("%lf %lf %lf",&stu[i].kor,&stu[i].eng,&stu[i].math);
        average = avg(stu[i].kor,stu[i].eng,stu[i].math);
        printf("%d번학생 평균 : %.2lf 학점: %c\n",i+1,average,grade(average));
    }
}