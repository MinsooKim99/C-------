/* PART3 Chapter1 연습문제 6
다음 그림을 분석해서 그 결과를 코드로 작성하세요.
*/
#include <stdio.h>
struct student{
    int no;
    char name[20];
    double total;
};
int main(){
    struct student stu = {20101323,"Park",160};
    struct student* p = NULL;
    struct student** pp = NULL;
    p = &stu;
    pp = &p;

    printf("%d %s %lf\n",stu.no,stu.name,stu.total);
    
    printf("%d %s %lf\n",(*p).no,(*p).name,(*p).total);
    printf("%d %s %lf\n",p->no,p->name,p->total);
    
    printf("%d %s %lf\n",(**pp).no,(**pp).name,(**pp).total);
    printf("%d %s %lf\n",(*pp)->no,(*pp)->name,(*pp)->total);

    return 0;
}