/* PART3 Chapter2 연습문제 7
키보드로부터 학번, 이름, 영어 점수, 국어 점수를 입력받을 수 있는 구조체를 만들고,
2010 학번인 경우 이름, 영어 점수, 국어 점수를 출력하는 프로그램을 작성하세요.
문자열을 찾는 함수로는 strstr() 함수가 있습니다.
*/
#include <stdio.h>
#include <string.h>

typedef struct student{
    char no[10];
    char name[20];
    double eng_score;
    double kor_score;
}STUDENT;

int main(){
    STUDENT stu;

    printf("학번 입력: ");
    gets(stu.no);
    printf("이름 입력: ");
    gets(stu.name);
    printf("영어 점수 입력: ");
    scanf("%lf",&stu.eng_score);
    printf("국어 점수 입력: ");
    scanf("%lf",&stu.kor_score);

    if(strstr(stu.no,"2010")){
        printf("이름: %s\n영어: %.2lf\n국어: %.2lf",stu.name,stu.eng_score,stu.kor_score);
    }
    
    return 0;
}