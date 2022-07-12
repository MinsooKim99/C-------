/* PART3 Chapter1 연습문제 8
다음 그림을 분석해서 그 결과를 코드로 작성하세요.
*/
#include <stdio.h>

struct student{
    char name[20];
    int money;
    struct student* right_link;
    struct student* left_link;
};

int main(){
    struct student stu1 = {"Kim",90,NULL,NULL};    
    struct student stu2 = {"Lee",80,NULL,NULL};    
    struct student stu3 = {"Goo",60,NULL,NULL};

    stu1.right_link = &stu3;
    stu1.left_link = &stu2;

    printf("stu1: %s %d \n",stu1.name,stu1.money);
    printf("stu1_left: %s %d \n",stu1.left_link->name,stu1.left_link->money);
    printf("stu1_right: %s %d \n",stu1.right_link->name,stu1.right_link->money);

    return 0;
}