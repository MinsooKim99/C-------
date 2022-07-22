/* PART3 Chapter1 연습문제 2
앞의 연습 문제에서 만들었던 구조체를 활용하여 5명의 학생 정보를 받을 수 있는
구조체 배열을 선언한 후에 데이터를 입력받고 출력까지 하는 프로그램을 작성해 보세요.
변형 - 구조체 배열 포인터 사용하기
*/
#include <stdio.h>
#define SIZE 5
typedef struct student{
    int no;
    char blood_type;
    double sight;
    int weight;
}STUDENT;

void student_input(STUDENT*);
void student_print(STUDENT*);

int main(){
    STUDENT stu[SIZE];
    STUDENT* p;
    int i;
    p = stu;
    
    student_input(p);
    student_print(p);

    return 0;
}
void student_input(STUDENT* p){
    int i;

    for(i=0;i<SIZE;i++){
        printf("%d번째 학생 학번 혈액형 시력 몸무게 \n",i+1);
        scanf("%d %c %lf %d",&p[i].no,&p[i].blood_type,&p[i].sight,&p[i].weight);
        printf("\n");
    }

}
void student_print(STUDENT* p){
    int i;
    for(i=0;i<SIZE;i++){
        printf("%d번째 학생 학번: %d 혈액형: %c 시력: %.2lf 몸무게 %d\n",
            i+1,p[i].no,p[i].blood_type,p[i].sight,p[i].weight);
    }
}