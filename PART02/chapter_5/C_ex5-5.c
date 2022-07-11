/* PART2 Chapter5 연습문제 5
다음 swap()함수의 메모리 구조를 그림을 통해 분석하세요.
*/
#include <stdio.h>

void swap(int**,int**);
void main(){
    int a=10, b=20;
    int *p1 = NULL;
    int *p2 = NULL;

    p1=&a;
    p2=&b;

    printf("----------함수 호출 전----------\n");
    printf("a = %d, b = %d\n",a,b);         // a의 주소: p1, b의 주소: p2
    printf("*p1 = %d, *p2 = %d\n",*p1,*p2);

    swap(&p1, &p2);

    printf("----------함수 호출 후----------\n");
    printf("a = %d, b = %d\n",a,b);         // a의 주소: p2, b의 주소: p1
    printf("*p1 = %d, *p2 = %d\n",*p1,*p2);
}

void swap(int** q1,int** q2){
    int* tmp;
    tmp = *q1;
    *q1 = *q2;
    *q2 = tmp;
}