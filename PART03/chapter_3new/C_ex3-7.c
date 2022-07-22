/* PART3 Chapter3 연습문제 7
키보드로부터 학번, 이름, 중간고사 점수, 기말고사 점수, 출석 점수를 입력받아 학점을
계산하는 프로그램을 작성하세요. 단, 다음과 같은 형태로 파일에 저장하는 프로그램을 작성하세요.
학번	이름	중간고사	기말고사	출석	과제	총점	학점
20102310    홍길동  40  40  10  10  100 A+
20102311    우뢰매  35  35  8   8   86  B+
*/
#include <stdio.h>
#include <locale.h>

int main(){
    FILE* stream = fopen("report_card.txt","w");
    int i, input_num = -1;
    int num,mid_term,final_exam,attendance,report,total;
    char name[20],grade;

    fprintf(stream,"학번\t이름\t중간고사\t기말고사\t출석\t과제\t총점\t학점\n");

    while(input_num != 0){
        fprintf(stdout,"학번 이름(EngOnly) 중간고사 기말고사 출석 과제 총점 학점\n");
        fscanf(stdin,"%d %s %d %d %d %d %d %c",&num,name,&mid_term,&final_exam,
            &attendance,&report,&total,&grade);

        fprintf(stream,"%d\t%s\t%d\t%d\t%d\t%d\t%d\t%c\n",num,name,mid_term,final_exam,
            attendance,report,total,grade);

        printf("계속?(0:exit)");
        scanf("%d",&input_num);
    }

    fclose(stream);

    return 0;
}